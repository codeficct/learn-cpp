#include <iostream>
using namespace std;

void initializeNumbers();

void arrays()
{
  /* with tables
    int table[3];
    table[0] = 23;
    table[1] = 45;
    table[2] = 99;
    table[3] = 56;
  */

  // double decimals[3] = {0.3, 0.8, 9.4};
  initializeNumbers();
}

void initializeNumbers()
{
  const int MAX_LENGTH = 500;
  int numbers[MAX_LENGTH];

  for (int i = MAX_LENGTH; i > 0; i--)
    numbers[500 - i] = i;

  cout << "first position: " << numbers[0] << endl;
  cout << "medio position: " << numbers[250] << endl;
  cout << "end position: " << numbers[499] << endl;

  string name = "Sauterdev";
  size_t size = name.size();
  cout << "Length of the name is: " << size << endl;
  cout << "Lenght of the name using .length is: " << name.length() << endl;
}
