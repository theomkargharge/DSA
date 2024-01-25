#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[][4], int row, int col)
{

    int rowIndex = 4;
    int colIndex = 4;
    for (int col = 0; col < colIndex; col++)
    {

        for (int row = rowIndex - 1; row >= 0; row--)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // write code from here
    // vector<vector<int>>arr
    // int arr[][3] = {
    //     1, 2, 3,
    //     4, 5, 6,
    //     7, 8, 9};
    int arr[][4] = {
        5, 1, 9, 11,
        2, 4, 8, 10,
        13, 3, 6, 7,
        15, 14, 12, 16};

    rotate(arr, 4, 4);

    return 0;
}