#include <iostream>
using namespace std;

int main()
{
  int starCount, max;
  cout << "enter the N: \n";
  cin >> max;

  while (max > 0)
  {
    starCount = max;
    while (starCount > 0)
    {
      cout << "* ";
      starCount--;
    }
    cout << endl;
    max--;
  }

  return 0;
}