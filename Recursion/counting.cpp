#include <iostream>
using namespace std;
void counting(int n)
{
    if (n == 0)
    {
        return ;
    }
    // if processing is middle of base and recursive relation then that recusrion is called tail recursion
    // cout << n << endl;

    counting(n - 1);

    cout <<" Omkar Gharge "<< n << endl;
    // if processing is below  recursive relation then that recusrion is called head recursion

}
int main()
{
    // write code from here
    int n;
    cout<<"Enter Number :";
    cin >> n;

    counting(n);

    return 0;
}

