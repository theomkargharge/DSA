#include <bits/stdc++.h>
#include <vector>
using namespace std;
int triplate(int arr[], int n, int k)
{
    int a, b, c;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int p = j + 1; p < n; p++)
            {
                if (arr[i] + arr[j] + arr[p] == k)
                {
                    a = arr[i];
                    b = arr[j];
                    c = arr[p];
                }
            }
        }
    }
    cout << a << b << c << endl;
}
int main()
{
    // write code from here
    int arr[] = {1, 2, 3, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;
    cout << triplate(arr, n, k);

    return 0;
}