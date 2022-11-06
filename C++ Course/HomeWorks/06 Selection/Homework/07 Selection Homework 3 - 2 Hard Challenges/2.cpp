#include <iostream>
using namespace std;

int main()
{
  int first, last, s1, e1, s2, e2, hasPair = 1;

  cout << "enter first interval: \n";
  cin >> s1 >> e1;

  cout << "enter second interval: \n";
  cin >> s2 >> e2;

  if (s1 == s2)
    first = s1;
  if (e1 == e2)
    last = e1;

  if (e1 >= s2)
  {
    first = s2;
    last = e1;
  }
  else
  {
    hasPair = -1;
  }
  return 0;
}