#include <iostream>
using namespace std;

int main()
{
    // write code from here
    int x;
    cin >> x;

    int ans = 0;
    while (x != 0)
    {
        int digit = x % 10;

        // if ((ans > INT8_MAX / 10) || (ans < INT8_MIN / 10))
        // {
        //     return 0;
        // }
        ans = (ans * 10) + digit;
        x = x / 10;
    }

    cout << ans << endl;

    return 0;
}