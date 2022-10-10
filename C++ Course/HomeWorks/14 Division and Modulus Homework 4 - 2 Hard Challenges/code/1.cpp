#include <iostream>
using namespace std;

int main()
{
  cout << "enter the number" << endl;
  int n;
  cin >> n;
  bool isNotEven = n % 2;
  bool isEven = !isNotEven;

  cout << 100 * isEven + 7 * isNotEven;
  return 0;
}