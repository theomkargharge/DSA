#include <iostream>
using namespace std;
void bubblesort(int arr[], int size)
{
    int cnt = 0;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size - i-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                swap(arr[j], arr[j + 1]);
                cnt++;
                  
            }

        }

    }
    cout << cnt/2 << endl;
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
    // int arr[5] = {6, 2, 8, 4, 10};
    int arr[4]={4, 3 ,2, 1};

    bubblesort(arr, 4);
    printarr(arr, 4);

    return 0;
}