// #include <iostream>
// #include <vector>
// using namespace std;

// bool partition(vector<int> &arr)
// {
//     if (arr.size() % 2 == 1)
//     {
//         return false;
//     }
//     else
//     {
//
//     }
// }
// int main()
// {
//     // write code from here
//     vector<int> ans = {1, 2, 3, 4,5};
//     // if (partition(ans))
//     // {
//     //     cout << "True" << endl;
//     // }
//     // else
//     // {
//     //     cout << "False" << endl;
//     // }
//     cout << partition(ans) << endl;
//     cout << ans.size() << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
bool size(vector<int> arr)
{
    int sizes = arr.size();
     int k = 3;
        int m = 9;
        int s = 0;
        int e = sizes - 1;
        int mid = (s + e) / 2;
    if (sizes % 2 == 1)
    {
        return false;
    }
    else
    {
       

        vector<int> res1;
        vector<int> res2;
        int len1 = mid - s + 1;
        int len2 = e - mid;

        int ArrayIndex = s;
        for (int i = 0; i < len1; i++)
        {
            res1[i] = arr[ArrayIndex++];
        }
        ArrayIndex = mid + 1;
        for (int i = 0; i < len2; i++)
        {
            res2[i] = arr[ArrayIndex++];
        }

        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < len1; i++)
        {
            sum1 += res1[i];
        }
        for (int i = 0; i < len2; i++)
        {
            sum2 += res2[i];
        }

        if ((sum1 % k == m) && (sum2 % k == m))
        {
            return true;
        }
        else
        {
            return false;
        }
       
    }
     
    // cout << ans.size() << endl;
}
int main()
{
    // write code from here

    vector<int> ans = {1, 5, 2, 3};
    cout<<size(ans);
    if (size(ans))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}