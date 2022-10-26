#include <iostream>
using namespace std;

int main()
{
  cout << "enter the 2 numbers: " << endl;

  int a, b;
  cin >> a >> b;

  double div = (double)a / b;

  cout << "the fractional Part is: " << div - (int)div;
  return 0;
}