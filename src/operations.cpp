#include <iostream>
using namespace std;

void operations()
{
  // Arithmetic Operations
  int a = 4, b = 9;
  float result = (float)(a + 10) / (float)(b + 6);
  // Logic Operations and (&&) or (||)
  if (a == b && b == a)
  {
    result = 0;
  }

  cout << "[Operations] output: " << result << endl;
}