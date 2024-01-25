// #include <iostream>
// using namespace std;
// int power(int n)
// {
//     // base case
//     if (n == 0)
//         return 1;

//     // recursive relation
//     return 3 * power(n - 1);
// }
// int main()
// {
//     // write code from here
//     int n;
//     cin >> n;

//     int ans = power(n);
//     cout << ans << endl;

//     return 0;
// }
// ******************************************************
// Factorial Number
/* base case

if(n == 0)
   return 1;

n = n * n - 1;
5  = 5 - 4!
4 = 4  - 3!
3 = 3 - 2!
2 = 2 - 1!
1 = 1 - 0!
*/

// #include <bits/stdc++.h>
// using namespace std;

// long long int factorial(long long int n)
// {
//     // base case
//     if (n == 0)
//         return 1;

//     // int samallerProblem = factorial(n - 1);
//     // int biggerProblem = n * samallerProblem;

//     // return biggerProblem;

//     return n * factorial(n - 1);
// }

// int main()
// {
//     // write code from here
//     long long int n;
//     cin >> n;

//     long long int ans = factorial(n);

//     cout << ans << endl;

//     return 0;
// }

// ******************************************************

/*
counting
//base case

n == 0
return

RR
n - 1;

*/

// #include <bits/stdc++.h>
// using namespace std;
// void Counting(int n)
// {
//     // base case
//     if (n == 0)
//         return;

//     // Tail
//     cout << n << endl;

//     // Recrusive Relation
//     cout << endl;
//     Counting(n - 1);

//     // processing

//     // Head
//     cout << n << endl;
// }
// int main()
// {
//     // write code from here
//     int n;
//     cin >> n;
//     cout << endl;
//     Counting(n);
//     cout << endl;

//     return 0;
// }

/***********************************************/

/*
fibonacci Series

0 1 1 2 3 5 8
0 1 2 3 4 5 6

//base case
n == 0
 0
n == 1
  1


return fib(n-1)+fib(n-2);

        3rd position =   1 + 1 = 2

        4th position =  fib(n-1)+fib(n-2)=fib(4-1)+fib(4-2)
                                         =fib(3)+fib(2)
                                         = 2 + 1
                                         = 3
        5th position = fib(n-1)+fib(n-2) = fib(5-1)+fib(5-2)
                                         = fib(4)+fib(3)
                                         = 3     +    2
                                         = 5
        6th position = fib(n-1)+fib(n-2) = fib(6-1)+fib(6-2)
                                         = fib(5)+fib(4)
                                         = 5 + 3
                                         = 8
*/

// #include <bits/stdc++.h>
// using namespace std;

// int fib(int n)
// {
//     // base case
//     if (n == 0)
//         return 0;

//     if (n == 1)
//         return 1;

//     // Recursive Realtion
//     int ans = fib(n - 1) + fib(n - 2);

//     return ans;
// }

// int main()
// {
//     // write code from here
//     int n;
//     cin >> n;

//     cout << "The Nth Term of fib is :" << fib(n) << endl;
//     return 0;
// }

//*********************************************************

/*
palindrome
//base case
start > end
return true;


if
*/
// #include <bits/stdc++.h>
// using namespace std;

// bool isPalindrome(string str, int start, int end)
// {

//     // base case
//     if (start > end)
//         return true;

//     // processing
//     if (str[start] != str[end])
//     {
//         return false;
//     }

//     else
//     {
//         // Recursive Relation
//         return isPalindrome(str, start + 1, end - 1);
//     }
// }

// int main()
// {
//     // write code from here .;

//     // string str = "okm";
//     string str = "shruti";

//     bool check = isPalindrome(str, 0, str.length() - 1);

//     if (check)
//     {
//         cout << "True";
//     }
//     else
//     {
//         cout << "False";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int SumOFarray(int array[], int n)
// {
//     // base case
//     if (n == 0)
//         return 0;

//     if (n == 1)
//         return array[0];

//     // Recursive Relation
//     int remainingpart = SumOFarray(array + 1, n - 1);

//     // Processing
//     int sum = array[0] + remainingpart;
//     return sum;
// }

// int main()
// {
//     // write code from here
//     // int array[] = {1, 2, 3, 4, 5};
//     int array[]={0};
//     int n = 1;
//     int ans = SumOFarray(array, n);
//     cout << ans << endl;
//     return 0;
// }

// SecondLargest Element
//  #include <bits/stdc++.h>
//  using namespace std;
//  void SecondLargestElment(int arr[],int n){
//      int lar = INT16_MIN;
//      int slar = INT16_MIN;
//      sort(arr,arr+n);
//      for (int i = 0; i < n; i++)
//      {
//          if(arr[i] > lar){
//              slar = lar;
//              lar = arr[i];
//          }
//          else if(arr[i] > slar && arr[i]!=lar){
//              slar = arr[i];
//          }
//      }

//     cout<< slar;
// }
// int main() {
// //write code from here
// int arr[] = {90,90,21,0};
// int n = 4;
// SecondLargestElment(arr,n);

//       return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int ForthLargestElement(int *arr, int n)
{
  int largest = INT16_MIN;
  int SecLargest = INT16_MIN;
  int ThirdLargest = INT16_MIN;
  int FourthLargest = INT16_MIN;

  // Largest Element
   if(n < 4){
    return -2147483648;;
   }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > largest)
    {
      FourthLargest = ThirdLargest;
      ThirdLargest = SecLargest;
      SecLargest = largest;
      largest = arr[i];
      continue;
    }
    if (arr[i] > SecLargest )
    {
      FourthLargest = ThirdLargest;
      ThirdLargest = SecLargest;
      SecLargest = arr[i];
      continue;
    }
    if (arr[i] > ThirdLargest)
    {
      FourthLargest = ThirdLargest;
      ThirdLargest = arr[i];
      continue;
    }
    if (arr[i] > FourthLargest )
    {
      FourthLargest = arr[i];
    }
  }


  cout << " Largest Element = " << largest << " Second Largest = " << SecLargest << " Third Largest = " << ThirdLargest << " Fourth Largest = " << FourthLargest << endl;
}
int main()
{
  // write code from here
  int arr[] = {3, 5, 1 ,3, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  ForthLargestElement(arr, n);

  return 0;
}