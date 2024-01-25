#include <iostream>
using namespace std;
/*
pattern
A
B C
D E G
H i j k
 */

void Trinaglepattern(void)
{
    int n;
    cin >> n;

    char ch = 'A';
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << ch<<" ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
}
int main()
{
    // write code from here
    Trinaglepattern();

    return 0;
}