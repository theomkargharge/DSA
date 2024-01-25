// #include <iostream>
// using namespace std;
// int partition(int arr[], int s, int e)
// {
//     int pivot = arr[s];
//     int cnt = 0;
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (arr[i] <= pivot)
//         {
//             cnt++;
//         }
//     }

//     // position of pivotIndex;
//     int pivotIndex = s + cnt;
//     swap(arr[pivotIndex], arr[s]);

//     // considering left and right for the sort
//     int i = s, j = e;
//     while (i < pivotIndex && j > pivotIndex)
//     {

//         while (arr[i] < pivot)
//         {
//             i++;
//         }
//         while (arr[j] > pivot)
//         {
//             j--;
//         }

//         if (i < pivotIndex && j > pivotIndex)
//         {
//             swap(arr[i++], arr[j--]);
//         }
//     }
//     return pivotIndex;
// }
// void quickSort(int arr[], int s, int e)
// {

//     // base case
//     if (s >= e)
//     {
//         return;
//     }

//     // partition
//     int p = partition(arr, s, e);

//     // sort left side
//     quickSort(arr, s, p - 1);

//     // sort right side
//     quickSort(arr, p + 1, e);
// }

// int main()
// {
//     // write code from here
//     int arr[] = {5, 4, 3, 2, 1,8,9,10};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     quickSort(arr, 0, n - 1);

//     for (int i = 0; i < n; i++)
//     {

//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <iostream>
using namespace std;
int partition(int *arr, int s, int e)
{

    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            cnt++;
        }
    }
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right sorting
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] < pivotIndex)
        {
            i++;
        }
        while (arr[j] > pivotIndex)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // processing partition
    int p = partition(arr, s, e);

    // left side array sort
    quickSort(arr, s, p - 1);

    // right side array sort
    quickSort(arr, p + 1, e);
}

int main()
{
    // write code from here
    int arr[] = {5, 3, 6, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}