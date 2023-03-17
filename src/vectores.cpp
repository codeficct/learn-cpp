#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> v);

void vectores()
{
  vector<int> numbers(5, 0);

  numbers[5] = 23;
  numbers.push_back(6);
  numbers.pop_back();
  numbers.clear();

  printVector(numbers);

  cout << (!numbers.empty() ? "This vector is not empty" : "This vector is empty") << endl;
}

void printVector(vector<int> v)
{
  for (int i = 0; i < v.size(); i++)
    cout << "Position [" << i << "] = " << v[i] << endl;

  cout << "Size of vector is " << v.size() << endl;
  cout << "++++++++++++++++++++++++++++++++++++++" << endl;
}
