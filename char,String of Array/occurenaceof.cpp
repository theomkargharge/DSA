#include <iostream>
using namespace std;
char getMaxOccCharacter(string s)
{

    int arr[26] = {0};
    // a  b  c  d  e  f  g  h  i  j  k  l  m  n  o   p  q  r  s  t  u  v  w  x  y  z 
   //  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15  16 17 18 19 20 21 22 23 24 25 26

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    return 'a' + ans;
    return 0;
}
int main()
{
    // write code from here
    string s;
    cin >> s;

    cout << getMaxOccCharacter(s) << endl;

    return 0;
}