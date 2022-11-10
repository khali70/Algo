#include <iostream>
using namespace std;

void drawRow(int s, int rc)
{
  int x = 0;
  while (x < (rc - s) / 2)
  {
    cout << ' ';
    x++;
  }
  x = s;
  while (x > 0)
  {
    cout << '*';
    x--;
  }
  x = 0;
  while (x < (rc - s) / 2)
  {
    cout << ' ';
    x++;
  }
  cout << endl;
}
int main()
{
  int starCount, rows, maxStarPerRow;
  cout << "enter the N: \n";
  cin >> rows;
  maxStarPerRow = (rows * 2) - 1;
  int x = 1;
  starCount = 1;
  while (x <= rows)
  {
    drawRow(starCount, maxStarPerRow);
    starCount += 2;
    x++;
  }
  x = 2;
  starCount = maxStarPerRow - 2;
  while (x <= rows)
  {
    drawRow(starCount, maxStarPerRow);
    starCount -= 2;
    x++;
  }
  return 0;
}