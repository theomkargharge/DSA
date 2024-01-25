#include <iostream>
using namespace std;
void takeInput(int arr[][3], int row, int col)
{
    cout << "Enter the elements of array: ";
    for (int i = 0; i < row; i++)
    {
        for (int t = 0; t < col; t++)
        {
            cin >> arr[i][t];
        }
    }
    cout << endl;
}

void rowiseSum(int arr[][3], int row, int col)
{

    for (row = 0; row < 3; row++)
    {
        int sum = 0;
        for (col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void ColwiseSum(int arr[][3], int row, int col)
{

    for (col = 0; col < 3; col++)
    {
        int sum = 0;
        for (row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void printArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // write code from here
    int arr[3][3] = {};
    takeInput(arr, 3, 3);
    printArray(arr, 3, 3);
    cout << endl;
    cout << "This is the answer for row :";
    rowiseSum(arr, 3, 3);
    cout << "This is the answer  for col:";
    ColwiseSum(arr, 3, 3);

    return 0;
}