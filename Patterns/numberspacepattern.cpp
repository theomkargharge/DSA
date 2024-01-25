#include <iostream>
using namespace std;
/*

1 1 1 1
  2 2 2
    3 3
      4

      space = row - 1;
            = 1-1=0;
            = 2-1=1;
            = 3-
      space -- ;

      number = n- row + 1;
              4 -1 +1 = 4;
              4 - 2 + 1 = 3;
              4 - 3 +1 = 2;
              4- 4 + 1= 1
*/
int main()
{
    // write code from here
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // print space

        int space = row - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // print number
        int col = 1;
        int value = n - row + 1;
        while (col <= value)
        {
            cout << row << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}