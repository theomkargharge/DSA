#include <bits/stdc++.h>
using namespace std;
bool subset(int arr[], int n, int k)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (((arr[j] + arr[i]) | (arr[j] - arr[i])) == k)
            {
                return true;
            }else{
                return false;
            }
        }
    }

}
int main()
{
    // write code from here
    // int arr[] = {2, 5, 1, 6, 7};
    int arr[]={4,3,2,1};
    // int arr[]={2,2,3,4};
    int k = 4, n;
    n = sizeof(arr) / sizeof(arr[0]);
    if (subset(arr, n, k))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}