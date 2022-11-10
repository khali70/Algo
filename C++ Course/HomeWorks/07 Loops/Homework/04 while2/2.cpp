#include <iostream>
using namespace std;

int main()
{
  cout << "enter the Number: \n";
  int n, x = 0;
  cin >> n;
  while (x <= n)
  {
    if (x % 8 == 0 || (x % 4 == 0 && x % 3 == 0))
    {
      cout << x << " ";
    }
    x++;
  }

  return 0;
}