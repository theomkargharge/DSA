#include <bits/stdc++.h>
using namespace std;
void solve(string str, string output, int index, vector<string> &ans)
{
    // base case
    if (index >= str.length())
    {

        ans.push_back(output);
        return;
    }

    // exclude
    solve(str, output, index + 1, ans);

    // include
    char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}

vector<string> subsequences(string str)
{
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}

int main()
{
    // write code from here
    string str = "aeiou";
    vector<string> s = subsequences(str);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }

    return 0;
}