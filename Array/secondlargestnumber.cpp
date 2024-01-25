#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
void secondlargest(int arr[], int size)
{
    int maxi = INT16_MIN;
    int ans = 0;
    // for (int i = 0; i < size; i++)
    // {
        sort(arr, arr + size);
        // ans = max(maxi, arr[i]);
    //    cout<<"Sorted arry is "<<endl;
    //     cout << arr[100] << " ";
        
    // }
    cout<<endl<<endl;
    cout<<"The second Number is "<<endl;
    cout<<arr[size - 2]<<endl;
    // cout << ans << endl;
}
int main()
{
    // write code from here
    int arr[100];
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    secondlargest(arr, n);

    return 0;
}