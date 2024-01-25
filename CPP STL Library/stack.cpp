#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // write code from here

    stack<string> s;

    s.push("Om");
    s.push("Shubham");
    s.push("Aniket");

    cout << "Top element of stack " << s.top() << endl;
    s.pop();
    cout << "Top element of stack " << s.top() << endl;
    s.pop();
    cout << "Top element of stack " << s.top() << endl;
    s.pop();
    cout << "Top element of stack " << s.top() << endl;

    cout<<"Empty or not "<<s.empty();

    return 0;
}