// 

// #include <bits/stdc++.h>
// using namespace std;
// void print(){
  
//     int n;
//     cin>>n;
//     int row = 1;
//     int start ;
//     while(row<=n){
//       int col = 1;
//       while(col<=row){
//         if(row%2==0){
//             cout<<"* "<<" ";
//         }
    
//         if(row%2!=0) cout<<(row*10)+(col*10)-10<<" ";
        
//         col++;
//       }
//       cout<<endl;
//       row=row+1;
//     }
// }
// int main() {
// //write code from here 
// print();

//       return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{

  vector<int> arr = {1,2,4,4,5};
  vector<int> ans = {};

   for(int i=0;i<arr.size()-1; i++){
    if(ans[i] != arr[i]){
       ans.push_back(arr[i]);
    }
   }
   cout << ans.size() << endl;
}