#include <bits/stdc++.h>
using namespace std;

void Reverse(string& str, int i, int j)
{
    cout << str << endl;

    // base case
    if (i > j)
    {
        return ;
    }

    // processing
    swap(str[i], str[j]);
    i++;
    j--;

    // recusrive function
    Reverse(str, i, j);
}

int main()
{
    // write code from here
    // string str = "Shruti";
    string om = "Omkar";
    Reverse(om, 0, om.length()-1);
    cout << om << endl;

    return 0;
}