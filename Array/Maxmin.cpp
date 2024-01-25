// #include <bits/stdc++.h>
// using namespace std;
// int printMax(int num[], int n)
// {

//     int maxi = INT16_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         // maxi = max(maxi, num[i]);

//         if (num[i] > maxi)
//         {
//             maxi = num[i];
//         }
//     }
//     return maxi;
// }

// int printMin(int arr1[], int a)
// {
//     int mini = INT16_MAX;

//     for (int i = 0; i < a; i++)
//     {
//         mini = min(mini, arr1[i]);
//     }

//     return mini;
// }
// int main()
// {
//     // write code from here
//     int size;
//     cin >> size;

//     int arr[100];

//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     // cout << "The max value is " << printMax(arr, size) << endl;

//     // cout << "The Min Value is " << printMin(arr, size) << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int findmax(vector<int>&arr){
    int max2 = INT16_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
       if(arr[i] >max2){
         max2 = arr[i];
       }
    }
    return max2;
    
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if((arr[i]*arr[i])<arr[max2]){
            
    //     }
    // }
    
} 

int main() {
//write code from here 
vector<int>arr = {3,6,1,0};
cout<<findmax(arr);

      return 0;
}