#include <iostream>
using namespace std;
void SelctionSort(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return;
    }

    int minIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    swap(arr[minIndex], arr[0]);
    
    SelctionSort(arr + 1, n - 1);
}
int main()
{
    // write code from here
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    SelctionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}