#include <iostream>
using namespace std;
//* * * *
//* * * *
//* * * *
//* * * *
void Pattern2(void)
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)

    {
        int j = 1;
        while (j <= n)
        {
            /* code */
            cout << "*";
            j++;
        }
        cout << endl;
        i++;

        /* code */
    }
}
int main()
{
    // write code from here
    Pattern2();

    return 0;
}