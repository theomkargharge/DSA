#include <iostream>
using namespace std;
/*
pattern
A B C
B C D
C D E

formula = row +col +'A'-2
*/

void Alphabet(void)
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            /* code */
            char ch = 'A' + row + col - 2;
            cout << ch<<" ";
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }
}
int main()
{
    // write code from here
    Alphabet();

    return 0;
}