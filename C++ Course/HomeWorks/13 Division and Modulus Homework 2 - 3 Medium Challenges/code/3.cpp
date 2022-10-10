#include <iostream>
using namespace std;

int main()
{
  cout << "enter the numbers" << endl;
  int num;
  cin >> num; // say it's 1234 numbers

  int thousands = (num / 1000) % 10; // 1

  cout << "the thousands digits: " << thousands;
  return 0;
}