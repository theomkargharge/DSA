#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        } 
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    // write code from here
    int even[8] = {11, 22, 33, 45, 55, 68, 79, 88};
    int odd[7] = {8, 9, 10, 12, 14, 15, 68};

    int evenindex = BinarySearch(even, 8, 79);
    cout << "The Index 79 is " << evenindex << endl;

    int oddIndex = BinarySearch(odd, 7, 8);
    cout << "The Index 8 is " << oddIndex << endl;

    return 0;
}