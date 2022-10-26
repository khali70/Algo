#include <iostream>
using namespace std;

int main()
{
  cout << "enter the 2 numbers: " << endl;

  double a, b;
  cin >> a >> b;

  double div = a / b;
  double fr = div - (int)div;
  int mod = fr * b;
  cout << "the modulus is: " << mod << endl;
  return 0;
}