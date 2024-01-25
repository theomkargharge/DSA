#include <iostream>
using namespace std;
int power(int a, int b)
{
    // cin >> a >> b;

    // base case
    if (b == 0)
    {
        return 1;
    }

    if (b == 1)
    {
        return a;
    }

    // recursive relation
    int ans = power(a, b / 2);

    // processing
    if (b % 2 == 0)
    {
        return ans * ans;  // if power is even then do it like this
    }
    else
    {
        return a * ans * ans;  // if power is odd then do it like this
    }
}
int main()
{
    // write code from here
    int a, b;
    cout<<"Enter the value and power  : ";
    cin >> a >> b;
    cout << endl;
    int res = power(a, b);

    cout << res << endl;

    return 0;
}