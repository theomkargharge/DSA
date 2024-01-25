#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    // write code from here
    int even[6] = {0, 5, 5, 6, 6, 6};

    cout << "This is first Occurance " << firstOcc(even, 6, 6) << endl;

    cout << "This is last Occurance  " << lastOcc(even, 6, 6) << endl;

    // int first = firstOcc(even, 9, 3);

    // int last = lastOcc(even, 9, 3);

    // int total = (last - first) + 1;
    // cout << "Total Occurance of 3 is " << total << endl;

    return 0;
}