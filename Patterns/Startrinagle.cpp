#include <iostream>
using namespace std;
// pattern n= 4;
//          *
//        * *
//      * * *
//    * * * *
int main()
{
    // write code from here
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        /* code */
        // print spaces first
        int space = n - row;
        while (space)
        {
            cout <<" ";
            space = space - 1;
        }
        // now prints stars
        int col = 1;
        while (col <= row)
        {
            cout << "*"<<" ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}