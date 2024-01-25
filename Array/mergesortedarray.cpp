#include <bits/stdc++.h>
#include <vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{

    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    // copy first array k element ko
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    // copy kardo second array k remaining element ko
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }

}

void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[5] = {1, 3, 0, 0, 0};

    int arr2[4] = {2, 4, 6, 5};

    int arr3[9] = {0};

    merge(arr1, 5, arr2, 4, arr3);

    sort(arr3, arr3 + 9);

    print(arr3, 9);

    return 0;
}