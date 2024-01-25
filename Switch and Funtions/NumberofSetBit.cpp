#include <iostream>
#include <math.h>
using namespace std;
void SetBit(void)
{
    int a, b, ans1 = 0, j = 0, ans = 0, i = 0;
    cout << "Enter the Value of a :" << endl;
    cin >> a;
    cout << "Enter the value of b : " << endl;
    cin >> b;

    int count = 0;
    int counter = 0;

    while (a != 0)
    {
        int bit = a & 1;
        ans = (bit * pow(10, i) + ans);
        a = a >> 1;
        i++;
    }

    cout << "The binary form of a : " << ans << endl;

    while (b != 0)
    {
        int bit1 = b & 1;
        ans1 = ((bit1 * pow(10, j)) + ans1);
        b = b >> 1;
        j++;
    }
    cout << "The binary form of b : " << ans1 << endl;

    while (ans != 0)
    {

        // int s = ans & 1;

        ans = ans >> 1;

        while (ans1 != 0)
        {
            // int t = ans1 & 1;
            ans1 = ans1 >> 1;
            
        }
        if (ans  | ans1 == 1)
        {
            count++;
        }
    }

    cout << count  << endl;
    // cout << counter << endl;
}
int main()
{
    // write code from here
    SetBit();
    return 0;
}