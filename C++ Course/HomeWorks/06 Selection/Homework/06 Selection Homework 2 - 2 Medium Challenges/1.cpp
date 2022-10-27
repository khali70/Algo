#include <iostream>
using namespace std;

int main()
{
  int x, max;

  cout << "Enter number first number: \n";
  cin >> x;
  max = x;

  cout << "Enter number second number: \n";
  cin >> x;
  max = max < x ? x : max;

  cout << "Enter number third number: \n";
  cin >> x;
  max = max < x ? x : max;

  cout << "Enter number fourth number: \n";
  cin >> x;
  max = max < x ? x : max;

  cout << "Enter number fifth number: \n";
  cin >> x;
  max = max < x ? x : max;

  cout << "Enter number 6st number: \n";
  cin >> x;
  max = max < x ? x : max;

  cout << "Enter number 7st number: \n";
  cin >> x;
  max = max < x ? x : max;

  cout << "Enter number 8st number: \n";
  cin >> x;
  max = max < x ? x : max;

  cout << "Enter number 9st number: \n";
  cin >> x;
  max = max < x ? x : max;

  cout << "Enter number 10st number: \n";
  cin >> x;
  max = max < x ? x : max;

  cout << "Max number is: " << max;
  return 0;
}