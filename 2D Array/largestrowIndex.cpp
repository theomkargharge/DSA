#include <iostream>
using namespace std;
void takeinput(int arr[][3], int row, int col)
{
    cout << "Enter the element : "<<endl;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
}
// void printarray(int arr[][3], int row, int col)
// {
//     for (row = 0; row < 3; row++)
//     {
//         for (col = 0; col < 3; col++)
//         {
//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }
// }
int largestrowindex(int arr[][3], int row, int col)
{
    int maxi = INT32_MIN;
    int rowIndex = 0;
    for (row = 0; row < 3; row++)
    {
        int sum = 0;

        for (col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << "The sum is ";
        cout << sum << " ";
        cout << endl;

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    cout << "The  row is "<<rowIndex<<endl;
    }
    cout << "The maximum sum is " << maxi << endl;
    return rowIndex;
}
int main()
{
    // write code from here
    int arr[][3] = {};
    takeinput(arr, 3, 3);
    // printarray(arr, 3, 3);
    cout << largestrowindex(arr, 3, 3) << endl;

    return 0;
}