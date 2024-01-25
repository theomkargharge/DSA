#include <bits/stdc++.h>
using namespace std;

void Reverse(int arr[], int size, int key)
{
    for (int i = 0; i < size ; i++)
    {
        if (arr[key] < size)
        {
            if (arr[i+1] == key)
            {

                swap(arr[key + 1], arr[key + 2]);
            }
        }
    }
}
void printarr(int arr[], int size)
{

    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    Reverse(arr, 5, 1);
    printarr(arr, 5);

    // cout<<pow(2,4);

    return 0;
}