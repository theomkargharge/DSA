#include <iostream>
using namespace std;
/*
*
* *
* * *
* * * *

*/
void pattern5(void)
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
    pattern5();

    return 0;
}