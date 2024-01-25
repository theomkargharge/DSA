#include <iostream>
#include <vector>
using namespace std;
int missingnumber(int array[], int size)
{

    int expected = 0;
    int actual = 0;

    for (int i = 1; i <= size; i++)
    {

        expected += i;

        actual += array[i - 1];
    }

    return (expected - actual);
}

int main()
{
    // write code from here
    int array[7] = {2, 3, 4, 1, 6, 7};
    cout << missingnumber(array, 7);

    return 0;
}