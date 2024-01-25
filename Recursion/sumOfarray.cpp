#include <iostream>
using namespace std;
/*

int arr[]={1,2,3,4,5};
sum = 15



base case

size == 0  --> 0
size == 1   --> arr[0]

recursive funtion
    int remainingpart = sumOfarray(arr + 1, size - 1);


processing
// processing
    // recursive funtion
    int sum = arr[0] + remainingpart;
    return sum;



*/

int sumOfarray(int *arr, int size)
{

    // base case
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];

    // processing
    int remainingpart = sumOfarray(arr + 1, size - 1);
    // recursive funtion
    int sum = arr[0] + remainingpart;
    return sum;
}
int main()
{
    // write code from here
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << sumOfarray(arr, n);

    return 0;
}