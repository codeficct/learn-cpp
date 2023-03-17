#include <iostream>
#include <vector>

using namespace std;

int rows = 2, cols = 2;
typedef int matrix[2][2];

void printMatrix(matrix m);
void printMatrixVector(vector<vector<int>> m);

void matrixs()
{
  int count = 1;
  // int m1[rows][cols];
  matrix m1;

  for (int r = 0; r < rows; r++)
    for (int c = 0; c < cols; c++)
    {
      m1[r][c] = count;
      count++;
    }

  // printMatrix(m1);
  vector<int> v(2, 0);
  vector<vector<int>> m2(2, v);
  printMatrixVector(m2);
}

void printMatrix(matrix m)
{
  for (int r = 0; r < rows; r++)
  {
    cout << "[ ";
    for (int c = 0; c < cols; c++)
      cout << m[r][c] << " ";
    cout << "]" << endl;
  }
}

void printMatrixVector(vector<vector<int>> m)
{
  for (int r = 0; r < m.size(); r++)
  {
    cout << "[ ";
    for (int c = 0; c < m[r].size(); c++)
      cout << m[r][c] << " ";
    cout << "]" << endl;
  }
}
