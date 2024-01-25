// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// private:
//     void solveSubset(vector<int>& nums, vector<int> output, int index, vector<vector<int>>& ans)
//     {
//         // base case
//         if (index >= nums.size())
//         {
//             ans.push_back(output);
//             return;
//         }

//         // exclude
//         solveSubset(nums, output, index + 1, ans);

//         // include
//         int element = nums[index];
//         output.push_back(element);

//         solveSubset(nums, output, index + 1, ans);
//     }

// public:
//     vector<vector<int>> subset(vector<int> &nums)
//     {
//         vector<vector<int>> ans;
//         vector<int> output;
//         int index = 0;
//         solveSubset(nums, output, index, ans);
//     }
// };

// int main()
// {
//     // write code from here
//     Solution s;
//     vector<int> nums = {1, 2, 3};
//     vector<vector<int>> res = s.subset(nums);
//     cout << "All Possible subsets are" << endl;
//     for (auto subset : res)
//     {
//         for (auto element : subset)
//         {
//             cout << element << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    void solve(vector<int> &nums, vector<int> &output, int index, vector<vector<int>> &ans)
    {
        // base case
        if (index == nums.size())
        {
            ans.push_back(output);
            return;
        }

        // exclude
        solve(nums, output, index + 1, ans);

        // include
        output.push_back(nums[index]);
        solve(nums, output, index + 1, ans);
        output.pop_back(); // backtrack
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums, output, 0, ans);
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res = s.subsets(nums);
    cout << "All possible subsets:" << endl;
    for (auto subset : res)
    {
        for (auto element : subset)
        {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}
