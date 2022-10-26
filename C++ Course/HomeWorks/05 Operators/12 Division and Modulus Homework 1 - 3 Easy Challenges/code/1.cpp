#include <iostream>
using namespace std;

int main()
{
  cout << "plz enter the 5 numbers" << endl;

  double n1, n2, n3, n4, n5;
  cin >> n1 >> n2 >> n3 >> n4 >> n5;
  double average = (n1 + n2 + n3 + n4 + n5) / 5;

  double sumOf3 = (n1 + n2 + n3) / (n4 + n5);
  double avgOf3 = sumOf3 * (3 / 2);

  cout << "the Average: " << average << endl;
  cout << "the sum of First 3 Divided by Sum of Last 2 : " << sumOf3 << endl;
  cout << "avg sum of First 3 Divided by sum of last 2 : " << avgOf3 << endl;

  return 0;
}