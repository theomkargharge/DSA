#include <bits/stdc++.h>
using namespace std;
int prime(int n)
{
    vector<bool> prime(n + 1, true);

    int cnt = 0;
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {

        if (prime[i])
        {
            cnt++;

            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    return cnt;
}
int main()
{
    // write code from here
    cout << "Enter number :";
    int n;
    cin >> n;
    cout << "The prime is " << prime(n) << endl;
    return 0;
}