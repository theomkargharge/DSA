
// pattern
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1

#include <iostream>
using namespace std;
void pattern4(void)
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while ((col <= n))
        {
            cout << n - col + 1<<" ";
            //4 - 1 +1 = 4
            //4 - 2 +1 = 3

            col++;
        }
        cout << endl;
        row++;
    }
}
int main()
{
    // write code from here
    pattern4();

    return 0;
}