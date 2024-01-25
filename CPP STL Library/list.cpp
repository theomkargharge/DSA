#include <iostream>
#include <list>
using namespace std;

int main()
{
    // write code from here
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);

    l.erase(l.begin());

    cout << "After erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout<<endl;

    cout << "size of list " << l.size() << endl;

    // copy list to another list
    list<int> n(l);

    // for(int i:n){
    //     cout<<i<<" ";
    // }

    return 0;
}