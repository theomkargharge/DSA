#include <bits/stdc++.h>
using namespace std;
class Solutin
{
private:
    int addOne(vector<int> &arr, int size)
    {
        int last = arr.size() - 1;
        int sum = 0, digit, res = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (i >= 0 && i <= 9)
            {

                arr[last] += 1;
                break;
            }
        }
        if (arr[last] >= 9)
        {

            res = arr[last];
            while (res > 0)
            {
                digit = res % 10;
                //  arr[last]=digit;
                arr.push_back(digit);
                res = res / 10;
            }
            arr.erase(arr.begin() + last);
        }
        swap(arr[last + 1], arr[last]);

        return (arr, size);
    }

public:
    vector<int> plusOne(vector<int> &ans, int t)
    {
        vector<int> res;
        addOne(ans, t);
        res = ans;
        return ans;
    }
};

int main()
{
    // // int n = arr.size();

    Solutin s1;
    // write code from here
    vector<int> vectors = {1, 2, 3, 4, 12, 5, 6};
    // vector<int> vectors = {9};
    vector<int> ans = s1.plusOne(vectors, vectors.size());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}