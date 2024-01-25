#include <iostream>
using namespace std;

void rotatearray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        end--;
    }
}

void againrotate(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // write code from here
    // int arr[] = {7, 5, 2, 11, 2, 43, 1, 1};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int t;
    cin >> t;

    int arr[t];
    cout << "Enter the element";

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        rotatearray(arr, t);
        againrotate(arr, t);
    }

    return 0;
}