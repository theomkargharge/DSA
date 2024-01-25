#include <iostream>
using namespace std;
int reverse(int arr[], int size)
{
    // int start = arr[key+1];
    // int end = size - 1;

    // while (start <= end)
    // {
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }

    int ans=0;
    for(int i = 0;i<size;i++){
        ans = ans^arr[i];
    }
    for(int i=0;i<size;i++){
        ans = ans^i;
    }
    
   return ans;
}
void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // write code from here
    int arr[5] = {1,2,2,6,5 };
   cout<< reverse(arr, 9);
    // printarr(arr, 9);

    //  int arr[6] = {10, 9, 8, 5,7,6};
    // reverse(arr, 6, 3);
    // printarr(arr, 6);

    return 0;
}