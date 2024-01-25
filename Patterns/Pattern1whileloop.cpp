#include <iostream>
using namespace std;
// 1 1 1
// 2 2 2
// 3 3 3
void Pattern(void)
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
int main()
{
    // write code from here
    Pattern();

    return 0;
}