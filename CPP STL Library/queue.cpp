#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // write code from here
    queue<int> q;

    // q.push("Omkar");
    // q.push("Gharge");
    // q.push("A Programmer");

    q.push(5);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(1);

    for (int i = 1; i < q.size(); i++)
    {
        cout << i << " ";
    }

    // cout << "Size before pop " << q.size() << endl;

    // cout << "First Element " << q.front() << endl;

    // q.pop();

    // cout << "First Element " << q.front() << endl;

    // cout << "Size after pop " << q.size() << endl;

    return 0;
}