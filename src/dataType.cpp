#include <iostream>
#include <string>

using namespace std;

void dataType() {
  // Integer
  int apples = 5;
  int parking = -1;
  // Float 32 bits - Double 64 bits
  float positiveTransaction = 9.99;
  float negativeTransaction = -23.08;
  double price = 4.32;
  double centimeters = -0.67;
  // Boolean
  bool isGreen = true; // 1
  bool isRed = false; // 0
  // Character - string
  char letter = 'R';
  string name = "Luis";
  cout << apples << parking << positiveTransaction << negativeTransaction << price << centimeters
       << isGreen << isRed << letter << name << endl;
}
