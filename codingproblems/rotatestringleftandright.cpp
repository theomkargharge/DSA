#include <iostream>
using namespace std;

void leftRotate(string str)
{
    // Write your code here.
    int start = 0;
    int end = str.length() - 1;
    // while (start < end)
    // {
    //     swap(str[start], str[end--]);
    // }
    while (start <= end)
    {
        swap(str[start], str[end--]);
    }
    cout << endl;

    while (start <= end)
    {
        swap(str[start], str[end--]);
    }
    cout << endl;
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }
}
int main()
{
    // write code from here
    string str = "codingninjas";
    leftRotate(str);

    return 0;
}
