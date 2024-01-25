#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums, int index, set<vector<int>> &ans)
{
    // base case
    if (index >= nums.size()-2)
    {
        ans.insert(nums);
        return;
    }

    // processing
    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        solve(nums, index + 1, ans);
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>> str(vector<int> &nums)
{
    set<vector<int>> ans;
    vector<vector<int>> res;
    int index = 0;
    solve(nums, index, ans);
    for (auto p : ans)
    {
        res.push_back(p);
    }
    return res;
}
int main()
{
    // write code from here

    vector<int> num = {1, 2, 3};
    vector<vector<int>> res = str(num);
    for (auto p : res)
    {
        cout<<"[";
        for (auto x : p)
        {
            cout << x << " ";
        }
        cout<<"]";
    }

    return 0;
}