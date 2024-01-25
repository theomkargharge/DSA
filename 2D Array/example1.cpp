#include <iostream>
using namespace std;
void Rowiseaddition(int arr[][4], int a, int b)
{

    // for (int i = 0; i < b; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < a; j++)
    //     {
    //         // sum += arr[j][i];

    //         // cout << arr[i][j] << " ";
    //     }

    //     cout << sum << " ";
    // }
    for (int i = 0; i < a; i++)
    {
        int sum = 0;
        for (int j = 0; j < b; j++)
        {
            // sum += arr[j][i];

            sum += arr[i][j];
            // cout << arr[i][j] << " ";
        }

        cout << sum << " ";
    }
}
int main()
{
    // write code from here
    int arr[3][4] = {
        1, 2, 3, 4,
        5, 6, 7, 8,
        9, 10, 11, 12};

    Rowiseaddition(arr, 3, 4);

    return 0;
}