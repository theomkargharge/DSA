#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapalternate(int arr[], int a)
{

    for (int i = 0; i < a; i += 2)
    {
        if (i + 1 < a)
        {

            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    // write code from here

    int size;
    cin >> size;

    int arr[100];
    
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    swapalternate(arr, size);

    printArray(arr, size);

    return 0;
}