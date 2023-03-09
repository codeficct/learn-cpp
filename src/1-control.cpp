#include <iostream>
#include "string"
#include "fstream"
using namespace std;

void control1()
{
  int sourcePrefix, sourceMobile, destinationPrefix, destinationMobile;
  float time;
  string clientType;

  ifstream mobileFile;
  mobileFile.open("C:/Users/luiyi/Desktop/dev/learn-cpp/resources/telephony.text");
  ofstream discountsFile("C:/Users/luiyi/Desktop/dev/learn-cpp/resources/discounts.text");

  if (mobileFile.fail())
  {
    cout << "Error opening file telephony.txt" << endl;
    exit(EXIT_FAILURE);
  }

  if (!discountsFile)
  {
    cout << "Error opening file discounts.txt" << endl;
    exit(EXIT_FAILURE);
  }

  float totalCost = 0;
  int clientsWithDiscount = 0;

  while (!mobileFile.eof())
  {
    mobileFile >> sourcePrefix >> sourceMobile >> destinationPrefix >> destinationMobile >> time >> clientType;

    bool isNational = sourcePrefix == destinationPrefix;
    bool isLongCall = time > 180;

    float priceSecond = isNational ? 0.02f : 0.04f;
    float priceLongCall = isNational ? 0.015f : 0.035f;

    float callCost = isLongCall
      ? (priceSecond * 180) + priceLongCall * (time - 180)
      : priceSecond * time;

    cout << "Call cost: " << callCost << " euros" << endl;

    bool isPrime = clientType == "P";

    if (isPrime)
    {
      bool hasDiscount = sourceMobile % 3 == 0 && sourceMobile % 4 == 0;

      if (hasDiscount)
      {
        float discount = (float)(sourceMobile % 100) / 100; // 37%
        callCost -= (callCost * discount);
        clientsWithDiscount++;

        discountsFile << sourceMobile << " " << discount * 100 << "% " << callCost << " Euros" << endl;
      }
    }
    totalCost += callCost;
  }

  cout << "[1-control] The total invoiced amount is: " << totalCost << " euros" << endl;
  cout << "[1-control] The number of clients with discount is: " << clientsWithDiscount << endl;

  mobileFile.close();
  discountsFile.close();
}
