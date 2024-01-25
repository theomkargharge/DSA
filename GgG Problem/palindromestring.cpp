#include <iostream>
using namespace std;
void palindrome(string str)
{
    // cin>>str;
    string str2 = str;
    int s = 0;
    int e = str.size() - 1;

    while (s < e)
    {
        swap(str[s++], str[e--]);
    }
    // cout<<str;

    if (str2 == str)
    {
        cout << "The String is palindrome " << endl;
    }
    else
    {
        cout << "The String is not palindrome" << endl;
    }
}
int main()
{
    // write code from here
    string str;
    cout << "Enter the string: ";
    cin >> str;

    palindrome(str);

    return 0;
}