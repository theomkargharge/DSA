#include <iostream>
#include<array>
using namespace std;

int main() {
//write code from here 
array <int ,5> a = {1,2,3,4,5};
int size = a.size();

for (int i = 0; i < size; i++)
{
    cout<<a[i]<<endl;
}

cout<<"Position of second index of array a "<<a.at(2)<<endl;
cout<<"is There array is empty? "<<a.empty()<<endl;

cout<<"The first element of array is "<<a.front()<<endl;
cout<<"The last element of arrya is "<<a.back()<<endl;


      return 0;
}