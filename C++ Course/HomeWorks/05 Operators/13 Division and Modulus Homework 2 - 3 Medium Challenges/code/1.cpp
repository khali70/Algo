#include <iostream>
using namespace std;
/*
%2
- Using only /2
- Using only %10
 */
int main()
{
  cout << "enter the numbers" << endl;
  int num;
  cin >> num;

  bool isEven1 = !(num % 2);

  int numHashFractions = (num / 2) * 2;
  bool isEven2 = numHashFractions == num;

  int num_has_fractions = (num / 2.0) * 10;
  bool isEven3 = (num_has_fractions % 10) == 0;

  int lastDigit = num % 10;
  bool BetterIsEven3 = lastDigit == 0 || lastDigit == 2 || lastDigit == 4 || lastDigit == 6 || lastDigit == 8;

  bool isEven4 = num & 1; // read this link https://stackoverflow.com/questions/160930/how-do-i-check-if-an-integer-is-even-or-odd#160947
  cout << isEven1 << endl;
  cout << isEven2 << endl;
  cout << isEven3 << endl;
  return 0;
}