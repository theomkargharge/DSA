#include <bits/stdc++.h>
#include<vector>
using namespace std;
/*
                        abc
          ------------------------------
        /    /        |     |      \       \
    abc    acb       bac   bca     cab     cba 
    

*/

void solve(vector<string>&nums,int index,vector<vector<string>>&ans){
    if(index >= nums.size()){
        ans.push_back(nums);
        return;
    }

    //processing
    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index],nums[j]);
        solve(nums,index+1,ans);
        swap(nums[index],nums[j]);
    }
}



vector<vector<string>> str(vector<string>&nums){
   vector<vector<string>>ans;
    int index = 0;
    solve(nums,index,ans);
    return ans;
}
int main() {
//write code from here 
vector<string>s={"a","b","c"};
vector<vector<string>>ans = str(s);
for (auto p:ans)
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