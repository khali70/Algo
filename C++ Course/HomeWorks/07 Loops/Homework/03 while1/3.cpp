#include <iostream>
using namespace std;

int main()
{
  int n, max;
  cout << "enter the N: \n";
  cin >> max;
  n = 0;
  string str = "";
  while (n <= max)
  {
    str += "* ";
    cout << str << endl;
    n++;
  }

  return 0;
}