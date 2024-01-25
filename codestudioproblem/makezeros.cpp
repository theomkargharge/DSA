#include <iostream>
#include <vector>
using namespace std;
void matrix(vector<vector<int>>& matrix, int n, int m)
{
    vector<bool> row(n, false), col(m, false);
    // if row or col has the zero then that row and col we initilize it as a true
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    // here if that row and col has true it means it have any 0 then simply we can make all the value of its row as well as col as a zero
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] || col[j])
            {
                matrix[i][j] = 0;
            }
        }
    }

    // simply print the array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // write code from here
    // vector<vector<int>> matrix1{
    //     {1, 2, 3},
    //     {2, 0, 4},
    //     {8, 9, 0}};
     vector<vector<int>> matrix1{
        {1, 2, 3,6},
        {2, 0, 4,5},
        {8, 9, 0,9}};
    int row = matrix1.size();
    int col = matrix1[0].size();

    matrix(matrix1, row, col);

    return 0;
}