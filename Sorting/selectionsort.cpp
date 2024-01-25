#include <iostream>
using namespace std;
void selctionsort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minindex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }

        swap(arr[minindex], arr[i]);
    }
}
void printarrr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // write code from here
    // int arr[10] = {5, 6, 3, 7, 2, 1, 4, 8, 9, 0};
    int arr[3]={1,0,2};
    selctionsort(arr, 3);
    printarrr(arr, 3);

    return 0;
}
// 5
// 5
// 3
// 6
// 7
// 1


// space complixity of selction sort = O(1)
//time complixity of selection sort = O(n^2)


//best caes if array is already is sorted then time complixty is O(n^2);
//In worst case is also time complixity is same O(n^2)

