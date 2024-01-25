#include <iostream>
using namespace std;
/*

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

row + col -2;
1 + 1 - 2;
0
2 + 1 -2 = 1;

n -j + 1;
row + 1- 1;
1 + 1 -1=1
2 + 1- 1
j -




3rd trinagle and 4th triangle
n- row+ 1;
5 - 1 + 1;
5
5 - 2 + 1= 4



1st triangle
n- row + 1;
5 - 1 +1;
4;
5 - 2 + 1;
3


2nd triangle
star = row - 1;
       1 - 1 =0;
       2 - 1 = 1;
       3 - 1 = 2'
       4 - 1 = 3;







*/
int main()
{
    // write code from here

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // first triangle
        int col = 1;
        int value = n - row + 1;
        while (col <= value)
        {
            cout << col << " ";
            col++;
        }

        // first left side star triangle
        int star = row - 1;
        while (star)
        {
            cout << "*"
                 << " ";
            star = star - 1;
        }

        // second right side star triangle

        // third triangle
        int star2;
        int valu = row;
        while (star2 <= row)
        {
            cout << "*"
                 << " ";
            star2 = star2 + 1;
            /* code */
        }
        int start = n - row + 1;
        while (start)
        {
            cout << start << " ";
            start--;
        }

        cout << endl;
        row++;
    }

    return 0;
}