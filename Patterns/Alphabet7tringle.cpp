#include <iostream>
using namespace std;
/*
pattern
A
B C
C D E
E G F H
*/
int main()
{
    // write code from here
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + row + col - 2;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}