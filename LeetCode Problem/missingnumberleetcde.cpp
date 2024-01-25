#include <iostream>
using namespace std;

bool missingnumber(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
               return true;
                // break;
            }
        }
        // break;
    }
    return false;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout<<missingnumber(arr, 5);
    return 0;
}

// // write code from here

// // int digit, rev = 0, temp, n;
// // cin >> n;
// // temp = n;

// // while (n != 0)
// // {
// //     digit = n % 10;
// //     rev = rev * 10 + digit;
// //     n = n / 10;
// // }

// // // cout<<rev<<endl;4
// // if (rev == temp)
// // {
// //     cout << "Palindrome" << endl;
// // }
// // else
// // {
// //     cout << "not palindrome" << endl;
// // }

// // return 0;

// int n;
// cin >> n;
// int row = 1;

// while (row <= n)
// {

//     int col = 1;
//     int temp = n-row+1;

//     while (col <= temp)
//     {

//         cout << "*"<<" ";
//         col++;
//     }
//     cout << endl;
//     row++;
// }