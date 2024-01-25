#include <iostream>
using namespace std;
/*
pattern
* * * *
  * * *
    * *
      *
n= 4;
int space = n- row +1;
    1st = 4- 1 + 1;
    2nd = 4 - 2 +1
    3rd = 4 - 3 +1
    4th = 4 - 4+1;

*/
int main()
{
    // write code from here
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {

        int space = row-1;
        while (space)
        {
            cout<<" ";
            space = space - 1;
        }
        
        int col = 1;
        char star = n- row + 1;
        while (col <= star)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}
