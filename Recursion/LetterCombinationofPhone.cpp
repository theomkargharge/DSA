#include <iostream>

#include <vector>

#include <string>

using namespace std;

void solve(string digits, string output, int index, vector<string> &ans, string mapping[])
{
    // base case
    if (index >= digits.length())
    {
        ans.push_back(output);

        return;
    }

    // processing
    int number = digits[index] - '0';

    string values = mapping[number];

    for (int i = 0; i < values.length(); i++)
    {
        output.push_back(values[i]);

        // recursive function

        solve(digits, output, index + 1, ans, mapping);

        output.pop_back();
    }
}

vector<string> leTerCombination(string digits)
{
    vector<string> ans;

    string output = "";

    if (digits.length() == 0)
        return ans;

    int index = 0;

    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs","tuv" "wxyz"};

    solve(digits, output, index, ans, mapping);

    return ans;
}

int main()
{
    // write code from here
    string str = "6";

    vector<string> ans = leTerCombination(str);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]