#include <iostream>
using namespace std;
/*
pattren
* * * *
* * *
* *
*

n = 4;


*/
int main()
{
    // write code from here
    int n;
    cin>>n;
     int row = 1;
     while(row<=n){
        int col= 1;
        int star = n- row+1;
        while(col<=star){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
     }
    return 0;
}