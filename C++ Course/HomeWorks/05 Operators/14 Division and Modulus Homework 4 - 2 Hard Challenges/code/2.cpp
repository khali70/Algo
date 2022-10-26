#include <iostream>
using namespace std;

int main()
{
  cout << "Enter your age in days" << endl;

  int age;
  cin >> age;

  int y = age / 360;
  age %= 360;

  int m = age / 30;
  age %= 30;

  cout << "your age is " << y << " Years " << m << " Months " << age << " Days" << endl;
  return 0;
}