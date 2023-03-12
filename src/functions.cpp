#include <iostream>
#include <cmath>
using namespace std;

int getAbsoluteValue(int number); // param: value
void getFactorialValue(int &number);  // param: reference
int recursiveFactorial(int number);   // param: value

void functions()
{
  int value;

  cout << "Enter a number: ";
  cin >> value;

  cout << "Factorial: " << recursiveFactorial(value) << endl;

  getFactorialValue(value);

  cout << "Absolute value: " << value << endl;
}

int getAbsoluteValue(int number)
{
  return number < 0 ? -number : number;
}

void getFactorialValue(int &number)
{
  int factorial = 1;

  for (int i = abs(number); i > 0; i--)
    factorial *= i;

  if (number < 0)
    factorial *= -1;

  number = factorial;
}

int recursiveFactorial(int number)
{
  if (abs(number) == 0)
    return 1;
  return recursiveFactorial(abs(number) - 1) * number;
}

