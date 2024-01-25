#include <iostream>
using namespace std;
/*
input ;
1 2 3 7
4 5 6 8
7 8 9 5




*/
int main()
{
    // write code from here
    int arr[4][4] = {
        // 1, 2, 3, 4,
        // 4, 5, 6, 8,
        // 7, 8, 9, 5
        1, 2, 3, 4,
        5, 6, 7, 8,
        9, 10, 11, 12,
        13, 14, 15, 16

    };
    int row = 4;
    int col = 4;
    int total = row * col;
    int count = 0;
    int startingRow = 0;
    int endingCol = col - 1;
    int endingRow = row - 1;
    int startingCol = 0;

    while (count < total)
    {

        //   print starting row

        for (int i = startingCol; count < total && i <= endingCol; i++)
        {
            cout << arr[startingRow][i] << " ";
            count++;
        }
        startingRow++;
        // cout << endl;

        // print ending col

        for (int i = startingRow; count < total && i <= endingRow; i++)
        {
            /* code */
            cout << arr[i][endingCol] << " ";
            count++;
        }
        endingCol--;
        // cout << endl;

        // print ending row

        for (int i = endingCol; count < total && i >= startingCol; i--)

        {

            cout << arr[endingRow][i] << " ";
            count++;
        }
        endingRow--;
        // cout << endl;

        // print starting coloum

        for (int i = endingRow; count < total && i >= startingRow; i--)
        {
            /* code */
            cout << arr[i][startingCol] << " ";

            count++;
        }
        startingCol++;
        // cout << endl;
    }
    return 0;
}