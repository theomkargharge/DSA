#include <bits/stdc++.h>
using namespace std;
vector<int> matrix(vector<vector<int>> mat, int k)
{
    vector<int> ans;
    vector<pair<int, int>> vp;
    for (int i = 0; i < mat.size(); i++)
    {
        int cnt = 0;
        for (int k = 0; k < mat[i].size(); k++)
        {
            if (mat[i][k] == 1)
                cnt++;
        }
        vp.push_back(make_pair(cnt, i));
    }
    sort(vp.begin(), vp.end());
    for (int i = 0; i < k; i++)
    {
        ans.push_back(vp[i].second);
    }
    return ans;
}
int main()
{
    // write code from here
    //    vector<int>matrix={{1,0,0},{1,1,1},{1,0,0}};
    vector<vector<int>> matrix1 = {{1, 1,0, 0,0}, {1, 1, 1,1,0}, {1, 0, 0,0,0},{1,1,0,0,0},{1,1,1,1,1}};
    int k = 3;
    vector<int> ans = matrix(matrix1, k);
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}