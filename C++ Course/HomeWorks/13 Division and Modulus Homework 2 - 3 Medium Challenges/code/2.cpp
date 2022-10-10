#include <iostream>
using namespace std;

int main()
{
  cout << "enter the numbers" << endl;
  int num;
  cin >> num; // say it's 1234 numbers

  int unites = num % 10;           // 4
  int tens = (num / 10) % 10;      // 3
  int hundreds = (num / 100) % 10; // 2

  int sum = hundreds + tens + unites;

  cout << "the sum of last 3 digits: " << sum;
  return 0;
}