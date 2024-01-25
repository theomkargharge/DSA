#include <iostream>
#include <vector>
using namespace std;
// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
// Example 1:
// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

void solve(vector<int> &nums, int index, vector<vector<int>> &ans)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(nums);
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

vector<vector<int>> SetPermutation(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, index, ans);
    return ans;
}

int main()
{
    // write code from here
    vector<int>s={1,2,3};
    vector<vector<int>>ans=SetPermutation(s);
    for (auto p: ans)
    {
        cout<<"[";
        for (auto n:p)
        {
            cout<<n<<"";
        }
        cout<<"]";
        
    }
    
    return 0;
}

