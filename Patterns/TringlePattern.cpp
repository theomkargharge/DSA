#include <iostream>
using namespace std;
// Triangle Pattern
//*
//* *
//* * *
//* * * *

void TringlePattern(void)
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*"
                 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}
int main()
{
    // write code from here
    TringlePattern();

    return 0;
}