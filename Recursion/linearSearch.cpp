#include <iostream>
using namespace std;
/*
int arr[],int key, int size;

arr= 1 2 3 5 6 8

//base case

size == 0
return 0

if(arr[0] == key)
return true;


else
int remaing = linsearch(arr+1,size-1);
return remaing


*/

bool linearSearch(int arr[], int size, int key)
{
    // base caed
    if (size == 0)
        return false;

    // processing

    if (arr[0] == key)
    {
        return true;
    }
    else
    {

        bool remaining = linearSearch(arr + 1, size - 1, key);

        return remaining;
    }
}
int main()
{
    // write code from here
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = linearSearch(arr, size, 10);

    if (ans)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }

    return 0;
}