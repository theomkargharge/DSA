#include <iostream>
using namespace std;
bool BinarySearch(int arr[], int s, int e, int k)
{
    // base case
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
    {
        return true;
    }

    else if (arr[mid] < k)
    {
        return BinarySearch(arr, mid + 1, e, k);
    }
    else
    {
        return BinarySearch(arr, s, mid - 1, k);
    }
}
int main()
{
    int arr[] = {1, 5, 6, 8, 9, 7, 3, 4, 0, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    int key = 5;

    int ans = BinarySearch(arr, s, n - 1, key);
    if (ans)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }
    return 0;
}