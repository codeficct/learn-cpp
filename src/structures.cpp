#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct date
{
  int day;
  int month;
  int year;
};

struct article
{
  string title;
  vector<string> words;
  int lines;
  date d; // struct date { day, month, year }
};

void printStruct(const date &s);
void printTable(date t[5], int size);
void printVector(vector<date> v);
string printDate(date d);

void structures()
{
  date birthday = {};

  birthday.day = 05;
  birthday.month = 10;
  birthday.year = 2001;

  // printStruct(birthday);

  date event = {25, 12, 2023};

  date s1 = {19, 2, 2015}, s2 = {};

  vector<date> v1(3, event), v2;

  date t1[2], t2[2];

  // permitted
  s2 = s1;
  v2 = v1;

  /*
    not allowed
    t2 = t1;
  */

  vector<date> vDate;
  date d = {2, 2, 2022};
  vDate.push_back(d);

  printVector(vDate);
}

string printDate(date d)
{
  return to_string(d.day) + "/" + to_string(d.month) + "/" + to_string(d.year);
}

void printStruct(const date &s)
{
  cout << "+++++++Estructure++++++++" << endl;
  cout << "The date is: " << printDate(s) << endl;
}

void printTable(date t[5], int size)
{
  cout << "++++++++++Table+++++++++" << endl;
  for (int i = 0; i < size; i++)
    cout << "[" << i << "]: the date is " << printDate(t[i]) << endl;
}

void printVector(vector<date> v)
{
  cout << "+++++++++Vector++++++++++" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << "[" << i << "]: the date is " << printDate(v[i]) << endl;
}
