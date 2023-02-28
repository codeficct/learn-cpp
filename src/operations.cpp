#include <iostream>
#include "header.h"

using namespace std;

void operations() {
  // Arithmetic Operations
  int a = 4, b = 9;
  float result = (float) a / (float) b;
  // Logic Operations and (&&) or (||)
  if (a == b && b == a) {
    result = 0;
  }
  cout << "[Operations] output: " << result << endl;
}