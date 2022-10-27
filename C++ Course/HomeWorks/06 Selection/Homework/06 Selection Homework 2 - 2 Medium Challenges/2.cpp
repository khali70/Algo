#include <iostream>
using namespace std;

int main()
{
  cout << "Enter n: \n";
  int n, input, max;

  cin >> n;

  cin >> input;
  max = input;

  cin >> input;
  max = max < input ? input : max;
  if (n > 2)
  {
    cin >> input;
    max = max < input ? input : max;
  }
  if (n > 3)
  {
    cin >> input;
    max = max < input ? input : max;
  }
  if (n > 4)
  {
    cin >> input;
    max = max < input ? input : max;
  }
  if (n > 5)
  {
    cin >> input;
    max = max < input ? input : max;
  }
  if (n > 7)
  {
    cin >> input;
    max = max < input ? input : max;
  }
  if (n > 8)
  {
    cin >> input;
    max = max < input ? input : max;
  }
  if (n > 9)
  {
    cin >> input;
    max = max < input ? input : max;
  }
  if (n > 10)
  {
    cin >> input;
    max = max < input ? input : max;
  }

  cout << max;
  return 0;
}