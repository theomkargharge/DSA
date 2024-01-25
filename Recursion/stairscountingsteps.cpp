#include <iostream>
using namespace std;
// problem is a person can jump to destination only jumping on the step and steps are either one or two

int jump(int n)
{
    // base case
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;

    int ans = jump(n - 1) + jump(n - 2);

    return ans;
}
int main()
{
    // write code from here
    int n;
    cin >> n;

    cout << "The count of number of jumps is : " << jump(n) << endl;

    return 0;
}