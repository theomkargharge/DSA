#include <iostream>
using namespace std;
/*
pattern
1
2 1
3 2 1
4 3 2 1

row-col+1
*/

void TrinagleReverse(void)
{
    //    int n;
    //    cin>>n;
    //    int row = 1;
    //    while (row<=n)
    //    {
    //     int col = 1;
    //     int value = row;
    //     while(col<=row){
    //         cout<<value<<" ";
    //         value = value - 1;
    //         col = col +1;
    //     }
    //     cout<<endl;
    //     row = row + 1;
    //    }

    // second method

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row - col + 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}
int main()
{
    // write code from here
    TrinagleReverse();

    return 0;
}