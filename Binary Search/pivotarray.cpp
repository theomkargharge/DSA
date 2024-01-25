#include <iostream>
using namespace std;
int getPivot(int arr[], int n)
{
    // int s = 0;
    // int e = n - 1;
    // int mid = s + (e - s) / 2;

    // while (s < e)
    // {
    //     if (arr[mid] >= arr[0])
    //     {
    //         s = mid + 1;
    //     }
    //     else
    //     {
    //         e = mid;
    //     }
    //     mid = s + (e - s) / 2;
    // }
    // // return e;
    // return s;
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid;
        }
        else
        {
            e = mid -1;;
        }
        mid = s + (e - s) / 2;
    }
    // return e;
    return s;

    int s = INT16_MAX
}

int main()
{
    // write code from here
    int arr[5] = {7, 9, 1, 2, 3};
    cout << "The pivot is " << getPivot(arr, 5) << endl;

    return 0;
}