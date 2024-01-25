#include <iostream>
using namespace std;
// Pattern
/*
A B C D
E F G H
I J K L
*/
void Alphabet2(void)
{
    int n;
    cin >> n;
    int row = 1;
    char ch = 'A';
    while (row <= n)
    {

        int col = 1;
        while (col <= n)
        {
            cout << ch << " ";
            ch = ch + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
int main()
{
    // write code from here
    Alphabet2();

    return 0;
}