#include <iostream>
using namespace std;
/*
pattern
A B C
A B C
A B C

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
            char ch = 'A' + col - 1 ;
            cout << ch<<" ";
            col++;
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