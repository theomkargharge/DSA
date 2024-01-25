// #include <iostream>
// using namespace std;
// int gcd(int a, int b)
// {

//     if (a == 0)
//         return b;

//     if (b == 0)
//         return a;

//     if (a != b)
//     {
//         if (a > b)
//         {
//             a = a % b;
//             // a = a - b;
//         }
//         else
//         {
//             b = b % a;
//             // b = b - a; two formula
//         }
//     }
//     return a;
// }
// int main()
// {
//     // write code from here
//     cout << "Enter the elements ";
//     int a, b;
//     cin >> a >> b;
//     int ans = gcd(a, b);
//     cout << "The Gretest common divisor of a and b is : " << ans << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    // write code from here
    int n;
    cin >> n;

    // if (n & 1)
    // {
    //     cout << "Odd" << endl;
    // }
    if (n >> 1)
    {
        cout << "even" << endl;
    }

    return 0;
}
