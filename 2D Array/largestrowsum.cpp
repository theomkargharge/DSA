#include <iostream>
using namespace std;
void largestRowsum(int arr[][3], int a, int b)
{

    int  rowIndex = -1;
    int maxi = INT16_MIN;
    for (int row = 0; row < a; row++)
    { 
        int sum = 0;
        for (int col = 0; col < b; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The largest sum is " << maxi << " "<<endl;
    cout << "The largest row is " << rowIndex << endl;
}
int main()
{
    // write code from here
    int arr[3][3] = {
        3,4,11,
        2,12,1,
        7,8,7
        };

    largestRowsum(arr, 3, 3);

    return 0;
}