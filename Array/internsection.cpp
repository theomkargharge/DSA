#include <iostream>
using namespace std;

int Intersection(int arr1[], int n, int arr2[], int m)
{

    int i = 0, j = 0;
    int k = 0;
    int ans[] = {};
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans[k++] = arr1[i];
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    for (int i = 0; i < sizeof(ans); i++)
    {
        cout << ans[k] << endl;
    }
}

int main()
{
    // write code from here
    int n = 8, m = 5;

    int arr1[8] = {1, 2, 34, 5, 6, 9, 8, 2};
    int arr2[5] = {5, 1, 48, 2, 34};

    cout << Intersection(arr1, n, arr2, m);

    return 0;
}
