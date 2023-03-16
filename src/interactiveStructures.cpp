#include <iostream>
using namespace std;

void interactiveStructures()
{
  cout << "[interactiveStructures] Enter a number interations: ";
  int count;
  cin >> count;

  // For loop
  for (int i = 0; i < count; i++)
    cout << "(FOR) iteration = " << i << endl;

  // While loop
  int i = 0;
  while (i < count)
  {
    cout << "(WHILE) iteration = " << i << endl;
    i++;
  }

  // Do-while loop
  int k = 0;

  do
  {
    cout << "(DO-WHILE) iteration = " << k << endl;
    k++;
  } while (k < count);
}