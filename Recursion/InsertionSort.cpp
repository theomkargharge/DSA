#include <iostream>
using namespace std;
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void InsertionSort(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return;
    }
    InsertionSort(arr, n - 1);
    // processing
    // print(arr,n);

    int j = n - 2;
    int temp = arr[n - 1];
    while (j >= 0 && arr[j] > temp)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = temp;

    // recursive funtion
}
int main()
{
    // write code from here
    int arr[] = {5, 4, 10, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    InsertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}