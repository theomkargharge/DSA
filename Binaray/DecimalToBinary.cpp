// // // #include <iostream>
// // // #include <math.h>
// // // using namespace std;

// // // int main()
// // // {
// // //     // write code from here
// // //     int n;
// // //     cin >> n;

// // //     int ans = 0;
// // //     int i = 0;
// // //     while (n != 0)
// // //     {
// // //         int bit = n & 1;
// // //         ans = (bit * pow(10, i)) + ans;
// // //         n = n >> 1;
// // //         i++;
// // //     }
// // //     cout << "The Binary is " << ans << endl;
// // //     return 0;
// // // }

// // #include<iostream>
// // #include<math.h>
// // using namespace std;

// // #include<iostream>
// // #include<math.h>
// // using namespace std;

// // int main() {

// //     int n;
// //     cin >> n;

// //     int ans  = 0;
// //     int i = 0;
// //     while(n != 0 ) {

// //         int bit  = n & 1;

// //         ans = (bit * pow(10, i) ) + ans;

// //         n = n >> 1;
// //         i++;

// //     }

// //     cout<<" Answer is " << ans << endl;
// //     return 0;
// // }

// #include <iostream>
// #include <math.h>
// using namespace std;
// void DecimalToBinary(void)
// {

//     int n;
//     cin >> n;

//     int digit, rem = 0, i = 0;

//     while (n != 0)
//     {
//         digit = n % 2;
//         int s = pow(10, i);
//         rem += (s*digit);
//         n = n / 2;
//         i = i + 1;
//     }
//     cout << rem << endl;

// }
// int main()
// {
//     // write code from here
//     DecimalToBinary();

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i;
    cout << "Enter the number to convert: ";
    cin >> n;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    cout << "Binary of the given number= ";
    for (i = i - 1; i >= 0; i--)
    {
        cout << a[i];
    }
}