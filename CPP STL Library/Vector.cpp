#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // write code from here

    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> s = {0};
   
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        // cout<<v[i]<<endl;
    }

    cout<<"Capacity of v "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"Size of v "<<v.size()<<endl;
    cout<<"first element of v "<<v.front()<<endl;
    cout<<"last element of v "<<v.back()<<endl;
    cout<<"Second and third element of vector v "<<v.at(2)<<" "<<v.at(3)<<endl;

    s.push_back(1);
    s.push_back(2);
    s.push_back(3);
    s.push_back(4);
    s.push_back(5);

    for (int i : s)
    {
        // cout << i << endl;
    }
        s.pop_back();

    // s.pop_back();
    // s.pop_back();
    for (int i : s)
    {
        cout << i << endl;
    }

    return 0;
}