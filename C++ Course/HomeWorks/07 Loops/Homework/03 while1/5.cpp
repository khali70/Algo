#include <iostream>
using namespace std;

int main()
{
  cout << "enter N numbers: " << endl;
  int n, temp, oddSum = 0, evenSum = 0;
  bool odd = true;
  cin >> n;
  int x = 1;
  while (x <= n)
  {
    cout << "enter the number: \n";
    cin >> temp;

    if (odd)
    {
      oddSum += temp;
    }
    else
    {
      evenSum += temp;
    }
    odd = !odd;
    x++;
  }

  cout << oddSum / (n / 2) << " " << evenSum / (n / 2);
  return 0;
}