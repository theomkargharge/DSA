#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
int pairsum(int arr[], int n, int s)
{

    // int n = 100;
    arr[100];

    int temp = 0, temp3 = 0, temp4 = 0, temp2 = 0, ans = 0, ans1 = 0, ans2 = 0, ans3 = 0;
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                temp = min(arr[i], arr[j]);
                temp2 = max(arr[i], arr[j]);
                temp3 = min(arr[i], arr[j]);
                temp4 = max(arr[i], arr[j]);
                ans = temp;
                ans1 = temp2;
                ans2 = temp3;
                ans3 = temp4;
            }
        }
    }
    // sort(ans, ans + n);
    cout << ans << " " << ans1 << endl
         << ans2 << " " << ans3 << endl;
}
// vector<vector<int>> pairSum(vector<int> &arr, int s)
// {
//     // Write your code here.
//     vector<vector<int>> ans;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[i] + arr[j] == s)
//             {
//                 vector<int> temp;
//                 temp.push_back(min(arr[i], arr[j]));
//                 temp.push_back(max(arr[i], arr[j]));
//                 ans.push_back(temp);
//             }
//         }
//     }
//     sort(ans.begin(), ans.end());
//     return ans;
// }
// void printArrry(int arr[], int s)
// {
//     int n = 100;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

int main()
{

    int s, n;
    cin >> n >> s;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pairsum(arr, n, s);

    return 0;
}