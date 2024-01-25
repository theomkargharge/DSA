#include <iostream>
#include <set>
using namespace std;

int main()
{
    // write code from here

    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(0);
    s.insert(52);
    s.insert(5);
    for (auto i : s)
    {
        cout << i << endl;
    }

    return 0;
}