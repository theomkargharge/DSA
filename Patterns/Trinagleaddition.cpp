#include <iostream>
using namespace std;
/*
pattern
n=4;


3 -2 +1 = 2
1
2 3
3 4 5
4 5 6 7


*/
void TrianglePlus(void)
{
    // int n;
    // cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     int value = row;
    //     while (col <= row)
    //     {
    //         cout << value<<" ";
    //         value++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

//second method
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row + col - 1<<" ";
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }
}
int main()
{
    // write code from here
    TrianglePlus();

    return 0;
}