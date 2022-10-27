#include <iostream>
using namespace std;

int main()
{
  cout << "enter X\n";
  int x;
  cin >> x;

  cout << "enter a,b,c,d,e: \n";
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  int n = 0;

  n += a > x;
  n += b > x;
  n += c > x;
  n += d > x;
  n += e > x;

  cout << 5 - n << " " << n;
  return 0;
}