#include <iostream>
using namespace std;
/*

pattern
          1
      1   2  1
    1   2   3   2  1
  1  2  3  4  3  2  1
*/
int main()
{
    // write code from here
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // Print the space
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        // print second tringle
        int j = 1;
        while (j <= row)
        {
            cout << j<<" ";
            j = j + 1;
        }

        // print the third tringle
        int start = row - 1;

        while (start)
        {
            cout << start<<" ";
            start = start - 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}