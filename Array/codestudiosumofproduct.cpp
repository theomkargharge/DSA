#include <iostream>
using namespace std;

long long int forsum(long long int n, long long int q)
{
    int temp = 0;

    for (int i = 0; i <= n; i++)
    {
        if (q == 1)
        {
            temp = temp + i;
        }
    }

    return temp;
}

long long int forProduct(long long int n, long long int q)
{
    int temp = 1;
    for (int i = 1; i <= n; i++)
    {
        if (q == 2)
        {
            temp = temp * i;
        }
    }
   
   return temp;
}

int main()
{
    // write code from here
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        if (q == 1)
        {

            cout<<forsum(n, q)<<endl;
        }
        if (q == 2)
        {

            cout<<forProduct(n, q)<<endl;
        }
    }
}