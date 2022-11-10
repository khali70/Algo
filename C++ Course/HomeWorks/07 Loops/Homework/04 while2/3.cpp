#include <iostream>
using namespace std;

int main()
{
  /* cout << "enter the Number: \n"; */
  
  int n, t = 0, x = 0;
  cin >> n;
  while (t <= n)
  {
    if ((x % 4 != 0 && x % 3 == 0))
    {
      cout << x << " ";
      t++;
    }
    x++;
  }

  return 0;
}