#include <iostream>
using namespace std;

int main()
{
  cout << "enter a,b,c : \n";
  int a, b, c, max = -1;
  cin >> a >> b >> c;

  if (a > max && a < 100)
  {
    max = a;
  }
  if (b > max && b < 100)
  {
    max = b;
  }
  if (c > max && c < 100)
  {
    max = c;
  }
  cout << max;
  return 0;
}