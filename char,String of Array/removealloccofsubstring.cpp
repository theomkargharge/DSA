#include <iostream>
using namespace std;
string removeOcc(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    cout << s;
}
int main()
{
    // write code from here
    string s; // = "daabcbaabcbc";
    cin >> s;
    removeOcc(s, "abc");

    return 0;
}