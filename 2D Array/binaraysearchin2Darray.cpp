#include <iostream>
using namespace std;
bool binaryserach(int target)
{
    int arr[3][3] = {
        
        1, 2, 3,
        4, 5, 6,
        7, 8, 9

    };
    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);

    int start = 0;

    int end = (row * col) - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = arr[mid / col][mid % col];

        if (element == target)
        {
            return true;
        }
        else if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return 0;
}
int main()
{
    // write code from here
    int t = 9;
    if (binaryserach(9))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}

// #include <iostream>

// using namespace std;

// int main() {
//   // define a 2D array
//   int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//   // get the number of rows
//   int num_rows = sizeof(array) / sizeof(array[0]);

//   // get the number of columns
//   int num_columns = sizeof(array[0]) / sizeof(array[0][0]);

//   // calculate the middle row and middle column
//   int middle_row = num_rows / 2;
//   int middle_column = num_columns / 2;

//   // access the middle element
//   int middle_element = array[middle_row][middle_column];

//   // print the middle element
//   cout << "The middle element is: " << middle_element << endl;

//   return 0;
// }
