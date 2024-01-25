#include <iostream>
using namespace std;
void triplate(int arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            /* code */
            for (int k = j + 1; i < a; k++)
            {
                /* code */
                if (i + j + k == a)
                {
                    cout << i << " " << j << " " << k << " ";
                }
            }
        }
    }
}
int main()
{
    // write code from here
    // int t;
    // cin>>t;

    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }

    triplate(arr, n);
    return 0;
}