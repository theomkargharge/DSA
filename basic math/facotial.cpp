#include <iostream>
using namespace std;
void factorial(long long int n)
{
    int res = 1;
    for (long long int  i = n; i >= 1; i--)
    {

        res *= i;
    }

    cout <<"The Factorial of number is : "<< res << endl;
}
int main()
{
    // write code from here
    cout<<"Enter the number :";
    int n;
    cin>>n;

    factorial(n);

    return 0;
}