#include <iostream>
using namespace std;

int main()
{
  int x, s1, e1, s2, e2, s3, e3, cnt = 0;
  cout << "Enter x: \n";
  cin >> x;

  cout << "enter first interval: \n";
  cin >> s1 >> e1;
  if (x >= s1 && x <= e1)
    cnt += 1;

  cout << "enter second interval: \n";
  cin >> s2 >> e2;
  if (x >= s2 && x <= e2)
    cnt += 1;

  cout << "enter third interval: \n";
  cin >> s3 >> e3;
  if (x >= s3 && x <= e3)
    cnt += 1;

  cout << cnt;
  return 0;
}