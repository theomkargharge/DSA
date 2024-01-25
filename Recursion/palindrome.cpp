#include <iostream>
using namespace std;
bool isPalindrome(string str, int i, int j)
{
    // base case
    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;
    else
        return isPalindrome(str, i + 1, j - 1);
}
int main()
{
    // write code from here
    // string str = "Omkar";
    string str = "saras";
    bool check = isPalindrome(str, 0, str.length() - 1);

    if ((check))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}