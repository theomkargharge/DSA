#include <iostream>
using namespace std;

int main()
{
    // write code from here
    

    int size;
    cin >> size;

    int arr[210];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }

    cout << ans << endl;
    return 0;
}
