#include <iostream>
using namespace std;
void reverse(string str)
{
    int start = 0;
    int end = str.size() - 1;
    while (start < end)
    {
        swap(str[start++], str[end--]);
    }
    cout << str;
}
int main()
{
    // write code from here

    string str;
    cout << "Enter the string:- ";
    cin >> str;
    cout << "This the reverse the string:- ";
    reverse(str);

    return 0;
}