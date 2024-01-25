#include <iostream>
using namespace std;
/*
pattern
1
2 3
4 5 6
7 8 9 10
*/

void TrinagleIncrement(void)
{
    int n;
    cin >> n;
    int row = 1;
    int count = 1;
    while (row <= 4)
    {
        int col = 1;
        while (col <= row)
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
    TrinagleIncrement();

    return 0;
}