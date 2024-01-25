#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
//write code from here 

int arr[5]={53,52,53,52,200};

int l;
int sl;
int tl;
sort(arr,arr+5);
for (int i = 0; i < 5; i++)
{
    for (int j = i+1; j < 5; j++)
    {
        if (arr[i]>arr[j])
        {
            l = arr[i];
            if(sl < l)
              sl=arr[j];
        }else{

            l=arr[j];
            sl=arr[i];
        }
        
    }
    
}

    cout<<sl<<endl;
// for (int i = 0; i < 5; i++)
// {
//     cout<<arr[i]<<endl;
// }



      return 0;
}