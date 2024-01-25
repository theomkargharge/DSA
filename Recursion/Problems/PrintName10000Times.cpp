#include <iostream>
using namespace std;
// Print name 10000 Times Using Recursive method
void Print100000(int Count)
{
    // base case
    if (Count == 0)
    {
        return;
    }
    // Recursive Process
    Print100000(Count - 1);
    

    cout << "Omkar Gharge " << Count << endl;

}
int main()
{
    // write code from here
    int cnt = 100;
    Print100000(cnt);

    return 0;
}