#include <iostream>
using namespace std;
// pattern
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12

void Pattern5(void)
{
    int n;
    cin >> n;
    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}
int main()
{
    // write code from here
    Pattern5();

    return 0;
}