#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
      int k=3;
    for (int i = 0; i < n; i++)
    {
        int s = arr[k+1];
        int e = n - 1;

        while (s <= e)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
        cout << arr[i] << " ";
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // write code from here
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr,5);
    // printarray(arr, 5);
    return 0;
}