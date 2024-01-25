#include <iostream>
using namespace std;
// pattern
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

void pattern3(void)
{
    int n;
    cin >> n;

    int row = 1;
    while ((row <= n))
    {
        int col = 1;
        while (col <= n)
        {
            cout << col;
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }
}

int main()
{
    // write code from here
    pattern3();

    return 0;
}