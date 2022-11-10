#include <iostream>
using namespace std;

int main()
{
  char ch;
  cout << "enter the char: \n";
  cin >> ch;

  int n;
  cout << "enter the N times\n";
  cin >> n;
  while (n >= 0)
  {
    cout << ch;
    n--;
  }

  return 0;
}