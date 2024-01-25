#include <iostream>
using namespace std;
bool Checktarget(int arr[][3], int n, int m, int target)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == target)
            {

                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    // write code from here
    int arr[3][3] = {1, 2, 3, 4, 6, 5, 6, 4, 0};

    cout << "The Target is " << Checktarget(arr, 3, 3, 6);

    return 0;
}