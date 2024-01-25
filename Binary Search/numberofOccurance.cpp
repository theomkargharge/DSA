#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    // write code from here
    int arr[7] = {1, 2, 3, 3,3, 3,5};

    int last = lastOcc(arr, 7, 3);
    int first = firstOcc(arr, 7, 3);
    
    // cout << "This is first Occurance " << firstOcc(arr, 6, 3) << endl;

    // cout << "This is last Occurance  " << lastOcc(arr, 6, 3) << endl;

    int total = last - first + 1; //formula
    cout << "The count of 3 is " << total << endl;

    return 0;
}