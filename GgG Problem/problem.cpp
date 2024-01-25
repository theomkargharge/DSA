#include <iostream>
using namespace std;
bool isPalindrome(int num)
{
    int temp = num;
    int digit;
    int rem = 0;
    while (num != 0)
    {
        digit = num % 10;
        rem = (rem * 10) + digit;
        num = num / 10;
    }

    if (temp == rem)
    {
        return true;
    }
    return false;
}

int PalinArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (isPalindrome(arr[i]) == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    // write code from here
    int arr[] = {111, 222, 333};
    // int arr[] = {121, 131, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << PalinArray(arr, n);
    return 0;
}