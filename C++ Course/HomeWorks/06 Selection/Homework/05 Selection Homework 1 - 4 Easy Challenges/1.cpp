#include <iostream>
using namespace std;

int main()
{
  cout << "enter A and b: \n";
  int a, b;
  cin >> a >> b;
  if (a % 2 != 0)
  {
    if (b % 2 != 0)
    {
      cout << a * b;
    }
    else
    {
      cout << a + b;
    }
  }
  else
  {
    if (b % 2 == 0 && b != 0)
    {
      cout << a / b;
    }
    else
    {
      cout << a - b;
    }
  }
  return 0;
}