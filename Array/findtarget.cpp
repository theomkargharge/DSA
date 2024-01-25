#include <iostream>
using namespace std;
int target(int arr[], int size, int target)
{
    int temp = 0, temp1 = 0;
    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size; j++)
        {

            if (arr[i] + arr[j] == target)
            {
                temp = arr[i];
                temp1 = arr[j];
            }
        }
    }
    cout << temp << " " << temp1 << endl;
}

int main()
{
    // write code from here
    int arr[5] = {1, 2, 3, 4, 5};
    cout << target(arr, 5, 5);
    return 0;
}