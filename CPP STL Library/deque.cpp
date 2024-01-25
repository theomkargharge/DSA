#include <iostream>
#include <deque>
using namespace std;

int main()
{
    // write code from here

    deque<int> d;

    d.push_back(1);
    d.push_back(2);

    cout << endl;

    cout << "Print First Index Element " << d.at(1) << endl;

    cout << "Front  " << d.front() << endl;
    cout << "Back   " << d.back() << endl;
    cout << "Empty or not " << d.empty() << endl;

    cout << endl
         << endl;

    cout << "Before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);

    cout << "after Erase " << d.size() << endl;

    for (int i : d)
    {
        cout << i << endl;
    }

    return 0;
}