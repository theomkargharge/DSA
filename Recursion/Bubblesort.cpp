#include <iostream>
using namespace std;
void BubbleSort(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return;
    }

    // processing
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // recursive funtion
    BubbleSort(arr, n - 1);
}
int main()
{
    // write code from here
    int arr[5] = {5, 3, 2, 4, 1};

    BubbleSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}