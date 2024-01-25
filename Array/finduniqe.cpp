#include <iostream>
using namespace std;

int findunique(int arr[], int size)
{

    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
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

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i]
    // }

        cout << findunique(arr, size);


    // if (findunique(arr, size))
    // {
    //     cout << findunique(arr, size);
    // }
    // else
    // {
    //     cout << "-1" << endl;
    // }

    return 0;
}