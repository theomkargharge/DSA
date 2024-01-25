#include <iostream>
using namespace std;
void rotateArray(int arr[][3], int a, int b)
{

    // int endingcol = col - 1;
    // int endingrow = row - 1;
    // int startingrow = 0;
    // int startincol = 0;

    // // int total = row * col;
    // int count = 0;

    // while (count < total)
    // {
    //     for (int i = startingrow; count < total && i < endingrow; i++)
    //     {
    //         /* code */
    //         cout << arr[i][endingcol] << " ";
    //         count++;
    //     }
    //     endingcol++;
    //     // cout << endl;
    // }

    int c = 3;
    int d = 3;

    for (int col = d - 1; col >= 0; col--)
    {
        for (int row = 0; row < c; row++)
        {

            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // write code from here
    int arr[3][3] = {
        1, 2, 3,
        4, 5, 6,
        7, 8, 9};

    rotateArray(arr, 3, 3);

    return 0;
}


// void rotateArray(int arr[][3], int a, int b)
// {

//     // int endingcol = col - 1;
//     // int endingrow = row - 1;
//     // int startingrow = 0;
//     // int startincol = 0;

//     // // int total = row * col;
//     // int count = 0;

//     // while (count < total)
//     // {
//     //     for (int i = startingrow; count < total && i < endingrow; i++)
//     //     {
//     //         /* code */
//     //         cout << arr[i][endingcol] << " ";
//     //         count++;
//     //     }
//     //     endingcol++;
//     //     // cout << endl;
//     // }

//     int c = 3;
//     int d = 3;

//     for (int col = 0; col < 3; col++)
//     {
//         for (int row = c - 1; row >= 0; row--)
//         {

//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     // write code from here
//     int arr[3][3] = {
//         // 1, 2, 3,0,
//         // 4, 5, 6,19,
//         // 7, 8, 9,30,
//         // 12,36,58,120

//         1, 2, 3,
//         4, 5, 6,
//         7, 8, 9

//     };

//     rotateArray(arr, 3, 3);

//     return 0;
// }


//print 1 to 100 even number?





