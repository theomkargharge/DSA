#include <iostream>
using namespace std;

int ArithematicP(void)
{
    cout << "Enter the value of N: " << endl;
    int n, AP;
    cin >> n;
    AP = (3 * n + 7);
    cout << "The value of Arithematic Expression is : ";
    return AP;
}
int main()
{
    // write code from here
    cout << ArithematicP() << endl;

    return 0;
}