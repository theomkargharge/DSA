#include <iostream>
using namespace std;
/*

input :
2 3 4 9
6 8 9 10
1 5 7 12


output:
row   col-> 0 1 2 3
 |
 V
0:          2 5 4 12
1:          6 8 9 10
2:          1 3 7  9


*/
int main()
{
    // write code from here
    int rowindex = 3;
    int colindex = 4;
    int arr[3][4] = {

        2, 3, 4, 9,
        6, 8, 9, 10,
        1, 2, 7, 12

    };

    for (int col = 0; col < colindex; col++)
    {

        if (col & 1)
        {
            for (int row = rowindex - 1; row >= 0; row--)
            {

                cout << arr[row][col] << " ";
            }
            cout << endl;
        }
        else
        {

            for (int row = 0; row < rowindex; row++)
            {
                cout << arr[row][col] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}