#include <bits/stdc++.h> 
#include <bits/stdc++.h>
using namespace std;
void Sorting(int arr[], int a){
    
   sort(arr ,arr+a);
}
void printarry(int arr[],int a){
    for (int i = 0; i < a; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main() {

int n;
cin>>n;

int arr[100];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
Sorting(arr,n);
// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }

 
Sorting(arr,n);
printarry(arr,n);

      return 0;
}