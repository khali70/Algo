#include <iostream>
using namespace std;

int main()
{
  int s, e, reg;
  cout << "enter start and end numbers: " << endl;
  cin >> s >> e;
  if (e < s)
  {
    reg = e;
    e = s;
    s = reg;
  }

  while (s <= e)
  {
    cout << s << endl;
    s++;
  }

  return 0;
}