#include <iostream>
#include<array>
using namespace std;
int addition(int arr[], int a)
{
    int count = 0;

    for (int i = 0; i < a; i++)
    {
        count = count + arr[i];
    }

    return count;
}
int main()
{
    // write code from here
    int size;
    cin >> size;

    int arr[10];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout<<"Addition is "<<addition(arr,size);

    return 0;
}

