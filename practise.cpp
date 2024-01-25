// // // // // // // // // // // // #include <iostream>
// // // // // // // // // // // // using namespace std;

// // // // // // // // // // // // /*
// // // // // // // // // // // // 1 2 3 4

// // // // // // // // // // // // 5 6 7 8
// // // // // // // // // // // // 9 10 11 12
// // // // // // // // // // // // 13 14 15 16

// // // // // // // // // // // //  1 2 3 4
// // // // // // // // // // // //  8 12 16 15
// // // // // // // // // // // //  14 13 9 5
// // // // // // // // // // // //  6 7 11 10

// // // // // // // // // // // // */
// // // // // // // // // // // // void spiralarray(int arr[][4], int a, int b)
// // // // // // // // // // // // {
// // // // // // // // // // // //     int row = 4;
// // // // // // // // // // // //     int col = 4;
// // // // // // // // // // // //     int startingrow = 0;
// // // // // // // // // // // //     int startingcol = 0;
// // // // // // // // // // // //     int endingrow = row - 1;
// // // // // // // // // // // //     int endingcol = col - 1;
// // // // // // // // // // // //     int total = row * col;
// // // // // // // // // // // //     int count = 0;

// // // // // // // // // // // //     while (count < total)
// // // // // // // // // // // //     {
// // // // // // // // // // // //         // printing starting row
// // // // // // // // // // // //         for (int i = startingcol; count < total && i <= endingcol; i++)
// // // // // // // // // // // //         {
// // // // // // // // // // // //             cout << arr[startingrow][i] << " ";
// // // // // // // // // // // //             count++;
// // // // // // // // // // // //         }
// // // // // // // // // // // //         startingrow++;

// // // // // // // // // // // //         // printing ending  col
// // // // // // // // // // // //         for (int i = startingrow; count < total && i <= endingrow; i++)
// // // // // // // // // // // //         {
// // // // // // // // // // // //             cout << arr[i][endingcol] << " ";
// // // // // // // // // // // //             count++;
// // // // // // // // // // // //         }
// // // // // // // // // // // //         endingcol--;

// // // // // // // // // // // //         // printing ending row
// // // // // // // // // // // //         for (int i = endingcol; count < total && i >= startingcol; i--)
// // // // // // // // // // // //         {
// // // // // // // // // // // //             cout << arr[endingrow][i] << " ";
// // // // // // // // // // // //             count++;
// // // // // // // // // // // //         }
// // // // // // // // // // // //         endingrow--;

// // // // // // // // // // // //         // printing starting row
// // // // // // // // // // // //         for (int i = endingrow; count < total && i >= startingrow; i--)
// // // // // // // // // // // //         {
// // // // // // // // // // // //             cout << arr[i][startingcol] << " ";
// // // // // // // // // // // //             count++;
// // // // // // // // // // // //         }
// // // // // // // // // // // //         startingcol++;
// // // // // // // // // // // //     }
// // // // // // // // // // // // }
// // // // // // // // // // // // int main()
// // // // // // // // // // // // {
// // // // // // // // // // // //     // write code from here
// // // // // // // // // // // //     int arr[4][4] = {
// // // // // // // // // // // //         1, 2, 3, 4,
// // // // // // // // // // // //         5, 6, 7, 8,
// // // // // // // // // // // //         9, 10, 11, 12,
// // // // // // // // // // // //         13, 14, 15, 16};
// // // // // // // // // // // //     spiralarray(arr, 4, 4);

// // // // // // // // // // // //     return 0;
// // // // // // // // // // // // }

// // // // // // // // // // // #include <iostream>
// // // // // // // // // // // using namespace std;

// // // // // // // // // // // void counts(int arr[], int n, int k)
// // // // // // // // // // // {

// // // // // // // // // // //     int start = 0;
// // // // // // // // // // //     int end = n - 1;
// // // // // // // // // // //     int count = 0;

// // // // // // // // // // //     // while (start < end)
// // // // // // // // // // //     // {

// // // // // // // // // // //     //     if (arr[start] + arr[end] == k)
// // // // // // // // // // //     //     {
// // // // // // // // // // //     //         start++;
// // // // // // // // // // //     //         end--;
// // // // // // // // // // //     //     }
// // // // // // // // // // //     //         count++;
// // // // // // // // // // //     // }

// // // // // // // // // // //     // cout << count << endl;

// // // // // // // // // // //     for (int i = 0; i < n; i++)
// // // // // // // // // // //     {
// // // // // // // // // // //         // if (arr[i] + arr[i + 1] == k)
// // // // // // // // // // //         // {
// // // // // // // // // // //         //     count++;
// // // // // // // // // // //         // }
// // // // // // // // // // //         for (int j = i + 1; j < n; j++)
// // // // // // // // // // //         {
// // // // // // // // // // //             if (arr[i] + arr[j] == k)
// // // // // // // // // // //             {
// // // // // // // // // // //                 count++;
// // // // // // // // // // //             }
// // // // // // // // // // //         }
// // // // // // // // // // //     }
// // // // // // // // // // //     cout << count << endl;
// // // // // // // // // // // }

// // // // // // // // // // // int main()
// // // // // // // // // // // {
// // // // // // // // // // //     // Write C++ code here

// // // // // // // // // // //     int arr[4] = {1, 1, 1, 1};

// // // // // // // // // // //     counts(arr, 4, 2);

// // // // // // // // // // //     return 0;
// // // // // // // // // // // }

// // // // // // // // // // // #include <bits/stdc++.h>
// // // // // // // // // // // using namespace std;
// // // // // // // // // // // int checksimilerarray(int arr[], int arr2[], int n)
// // // // // // // // // // // {

// // // // // // // // // // //     sort(arr, arr + n);
// // // // // // // // // // //     sort(arr2, arr2 + n);
// // // // // // // // // // //     for (int i = 0; i < n; i++)
// // // // // // // // // // //     {
// // // // // // // // // // //         if (arr[i] != arr2[i])
// // // // // // // // // // //         {
// // // // // // // // // // //             cout << false << endl;
// // // // // // // // // // //             break;
// // // // // // // // // // //         }
// // // // // // // // // // //     }
// // // // // // // // // // //     cout << true << endl;
// // // // // // // // // // // }
// // // // // // // // // // // int main()
// // // // // // // // // // // {
// // // // // // // // // // //     // write code from here
// // // // // // // // // // //     int arr[5] = {1, 2, 33, 55, 28};
// // // // // // // // // // //     int arr2[5] = {1, 2, 33, 55, 28};

// // // // // // // // // // //     checksimilerarray(arr, arr2, 5);

// // // // // // // // // // //     return 0;
// // // // // // // // // // // }

// // // // // // // // // // #include <bits/stdc++.h>
// // // // // // // // // // using namespace std;

// // // // // // // // // // int main()
// // // // // // // // // // {
// // // // // // // // // //     // write code from here
// // // // // // // // // //     int ans = 0;
// // // // // // // // // //     int arr[5] = {1, 2, 3, 5};
// // // // // // // // // //     // int arr[11] = {6, 1, 2, 8, 3, 4, 7, 10, 5};
// // // // // // // // // //     int a = 5;

// // // // // // // // // //     sort(arr, arr + a);
// // // // // // // // // //     // int i = 0;
// // // // // // // // // //     // for (; i < a - 1; i++)
// // // // // // // // // //     // {
// // // // // // // // // //     //     ans = arr[i] ^ i + 1;
// // // // // // // // // //     // }
// // // // // // // // // //     // cout << i << " ";
// // // // // // // // // //   int i;
// // // // // // // // // //     for (; i < a; i++)
// // // // // // // // // //     {
// // // // // // // // // //         if (arr[i] != i + 1);
// // // // // // // // // //     }

// // // // // // // // // //             cout<< i + 1;
// // // // // // // // // //     return 0;
// // // // // // // // // // }

// // // // // // // // // #include <bits/stdc++.h>
// // // // // // // // // using namespace std;
// // // // // // // // // void sorts(int arr[], int n)
// // // // // // // // // {

// // // // // // // // //   for (int i = 0; i < n; i++)
// // // // // // // // //   {
// // // // // // // // //     for (int j = i + 1; j < n; j++)
// // // // // // // // //     {
// // // // // // // // //       if (arr[j] < arr[i])
// // // // // // // // //       {
// // // // // // // // //         swap(arr[j], arr[i]);
// // // // // // // // //       }
// // // // // // // // //     }
// // // // // // // // //   }
// // // // // // // // //   for (int i = 0; i < n; i++)
// // // // // // // // //   {

// // // // // // // // //     cout << arr[i] << " ";
// // // // // // // // //   }
// // // // // // // // // }
// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //   // write code from here
// // // // // // // // //   int arr[10] = {3,5,6,8,7,9,4,2,1,10};
// // // // // // // // //   sorts(arr, 10);

// // // // // // // // //   return 0;
// // // // // // // // // }

// // // // // // // // // #include <iostream>
// // // // // // // // // using namespace std;
// // // // // // // // // void range()
// // // // // // // // // {
// // // // // // // // //   int m;
// // // // // // // // //   cout << "Enter the first element" << endl;
// // // // // // // // //   cin >> m;
// // // // // // // // //   int n;
// // // // // // // // //   cout << "Enter the second element" << endl;
// // // // // // // // //   cin >> n;

// // // // // // // // // //   int i, a;
// // // // // // // // // //   int arr[] = {};
// // // // // // // // // //   int na = sizeof(arr) / sizeof(arr[0]);
// // // // // // // // // //   for (i = m + 1; i < n; i++)
// // // // // // // // // //   {
// // // // // // // // // //     if (i > 0)
// // // // // // // // // //     {
// // // // // // // // // //       a = i % 2;
// // // // // // // // // //       arr[i] = a;
// // // // // // // // // //       i = i / 2;
// // // // // // // // // //     }
// // // // // // // // // //   }

// // // // // // // // // //   for (int j = na - 1; j >= 0; j--)
// // // // // // // // // //   {
// // // // // // // // // //     cout << arr[i];
// // // // // // // // // //   }
// // // // // // // // // // }
// // // // // // // // // // int main()
// // // // // // // // // // {
// // // // // // // // // //   // write code from here
// // // // // // // // // //   range();

// // // // // // // // // //   return 0;
// // // // // // // // // // }

// // // // // // // // // // #include <iostream>
// // // // // // // // // // using namespace std;
// // // // // // // // // // void recursion(int n)
// // // // // // // // // // {

// // // // // // // // // //   if (n == 0)
// // // // // // // // // //   {
// // // // // // // // // //     return ;
// // // // // // // // // //   }

// // // // // // // // // //   cout << "omkar" << endl;
// // // // // // // // // //   recursion(n - 1);
// // // // // // // // // // }
// // // // // // // // // // int main()
// // // // // // // // // // {
// // // // // // // // // //   // write code from here
// // // // // // // // // //   int n;
// // // // // // // // // //   cin >> n;
// // // // // // // // // //   recursion(n);
// // // // // // // // // //   //  ans = cout << ans << endl;

// // // // // // // // // //   return 0;
// // // // // // // // // // }

// // // // // // // // // // Online C++ compiler to run C++ program online
// // // // // // // // // #include <iostream>
// // // // // // // // // using namespace std;

// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //   // Write C++ code here
// // // // // // // // //   // std::cout << "Hello world!";
// // // // // // // // //   int n;
// // // // // // // // //   cin >> n;

// // // // // // // // //   int row = 1;
// // // // // // // // //   while (row <= n)
// // // // // // // // //   {
// // // // // // // // //     int space = n - row;

// // // // // // // // //     while (space)
// // // // // // // // //     {
// // // // // // // // //       cout << " ";
// // // // // // // // //       space--;
// // // // // // // // //     }
// // // // // // // // //     int count = 1;
// // // // // // // // //     int col = 1;

// // // // // // // // // //     while (col <= row)
// // // // // // // // // //     {
// // // // // // // // // //       col = col * count;
// // // // // // // // // //       count = count + 2;
// // // // // // // // // //       col++;
// // // // // // // // // //       cout << "*";
// // // // // // // // // //     }
// // // // // // // // // //     // cout << endl;
// // // // // // // // // //     row++;
// // // // // // // // // //   }

// // // // // // // // // //   return 0;
// // // // // // // // // // }

// // // // // // // // // #include <iostream>
// // // // // // // // // using namespace std;
// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //   for (int i = 1; i <= 3; i++)
// // // // // // // // //   {
// // // // // // // // //     for (int j = 1; j <= 7; j++)
// // // // // // // // //     {
// // // // // // // // //       if (j == 4 - i || j == 4 + i || i == 2 && j > 2 && j < 6)
// // // // // // // // //       {
// // // // // // // // // //         cout << "*"<<" ";
// // // // // // // // // //       }
// // // // // // // // // //       else
// // // // // // // // // //       {
// // // // // // // // // //         cout << " ";
// // // // // // // // // //       }
// // // // // // // // // //     }
// // // // // // // // // //     cout << endl;
// // // // // // // // // //   }
// // // // // // // // // //   return 0;
// // // // // // // // // //
// // // // // // // // // //
// // // // // // // // // //
// // // // // // // // // //
// // // // // // // // // //
// // // // // // // // // //
// // // // // // // // // //
// // // // // // // // // //
// // // // // // // // // //
// // // // // // // // // //

// // // // // // // // // #include<iostream>
// // // // // // // // // using namespace std;

// // // // // // // // // void merge(int *arr, int s, int e) {

// // // // // // // // //     int mid = (s+e)/2;

// // // // // // // // //     int cnt1 = mid - s + 1;
// // // // // // // // //     int cnt2 = e - mid;

// // // // // // // // //     int *first = new int[cnt1];
// // // // // // // // //     int *second = new int[cnt2];

// // // // // // // // //     //copy values
// // // // // // // // //     int mainArrayIndex = s;
// // // // // // // // //     for(int i=0; i<cnt1; i++) {
// // // // // // // // //         first[i] = arr[mainArrayIndex++];
// // // // // // // // //     }

// // // // // // // // //     mainArrayIndex = mid+1;
// // // // // // // // //     for(int i=0; i<cnt2; i++) {
// // // // // // // // //         second[i] = arr[mainArrayIndex++];
// // // // // // // // //     }

// // // // // // // // //     //merge 2 sorted arrays
// // // // // // // // //     int index1 = 0;
// // // // // // // // //     int index2 = 0;
// // // // // // // // //     mainArrayIndex = s;

// // // // // // // // //     while(index1 < cnt1 && index2 < cnt2) {
// // // // // // // // //         if(first[index1] < second[index2]) {
// // // // // // // // //             arr[mainArrayIndex++] = first[index1++];
// // // // // // // // //         }
// // // // // // // // //         else{
// // // // // // // // //             arr[mainArrayIndex++] = second[index2++];
// // // // // // // // //         }
// // // // // // // // //     }

// // // // // // // // //     while(index1 < cnt1) {
// // // // // // // // //         arr[mainArrayIndex++] = first[index1++];
// // // // // // // // //     }

// // // // // // // // //     while(index2 < cnt2 ) {
// // // // // // // // //         arr[mainArrayIndex++] = second[index2++];
// // // // // // // // //     }

// // // // // // // // //     delete []first;
// // // // // // // // //     delete []second;

// // // // // // // // // }

// // // // // // // // // void mergeSort(int *arr, int s, int e) {

// // // // // // // // //     //base case
// // // // // // // // //     if(s >= e) {
// // // // // // // // //         return;
// // // // // // // // //     }

// // // // // // // // //     int mid = (s+e)/2;

// // // // // // // // //     //left part sort karna h
// // // // // // // // //     mergeSort(arr, s, mid);

// // // // // // // // //     //right part sort karna h
// // // // // // // // //     mergeSort(arr, mid+1, e);

// // // // // // // // //     //merge
// // // // // // // // //     merge(arr, s, e);

// // // // // // // // // }

// // // // // // // // // int main() {

// // // // // // // // //     int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
// // // // // // // // //     int n = 15;

// // // // // // // // //     mergeSort(arr, 0, n-1);

// // // // // // // // //     for(int i=0;i<n;i++){
// // // // // // // // //         cout << arr[i] << " ";
// // // // // // // // //     } cout << endl;

// // // // // // // // //     return 0;
// // // // // // // // // }

// // // // // // // // // #include <bits/stdc++.h>
// // // // // // // // // using namespace std;
// // // // // // // // // int addOne(vector<int> &arr, int size)
// // // // // // // // // {
// // // // // // // // //     int last = arr.size() - 1;
// // // // // // // // //     int sum = 0, digit, res = 0;
// // // // // // // // //     for (int i = 0; i < arr.size(); i++)
// // // // // // // // //     {
// // // // // // // // //         if (i >= 0 && i <= 9)
// // // // // // // // //         {

// // // // // // // // //             arr[last] += 1;
// // // // // // // // //             break;
// // // // // // // // //         }
// // // // // // // // //     }
// // // // // // // // //     if (arr[last] > 10)
// // // // // // // // //     {

// // // // // // // // //         res = arr[last];
// // // // // // // // //         while (res > 0)
// // // // // // // // //         {
// // // // // // // // //             digit = res % 10;
// // // // // // // // //             //  arr[last]=digit;
// // // // // // // // //             arr.push_back(digit);
// // // // // // // // //             res = res / 10;
// // // // // // // // //         }
// // // // // // // // //         arr.erase(arr.begin() + last);
// // // // // // // // //     }
// // // // // // // // //         swap(arr[last + 1], arr[last]);

// // // // // // // // //     return (arr, size);
// // // // // // // // // }
// // // // // // // // // // void print(vector<int> &ans, int size)
// // // // // // // // // // {
// // // // // // // // // //     for (int i = 0; i < ans.size(); i++)
// // // // // // // // // //     {
// // // // // // // // // //         cout << ans[i] << " ";
// // // // // // // // // //     }
// // // // // // // // // // }
// // // // // // // // // vector<int> plusOne(vector<int> &ans, int t)
// // // // // // // // // {
// // // // // // // // //     vector<int> res;
// // // // // // // // //     addOne(ans, t);
// // // // // // // // //     res = ans;
// // // // // // // // //     return ans;
// // // // // // // // // }
// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     // write code from here
// // // // // // // // //     vector<int> vectors = {1, 2, 3, 4, 100, 510, 89, 74, 30, 10, 30, 24};
// // // // // // // // //     vector<int> arr = plusOne(vectors, vectors.size());
// // // // // // // // //     // int n = arr.size();
// // // // // // // // //     for (auto i : arr)
// // // // // // // // //     {
// // // // // // // // //         cout << i << " ";
// // // // // // // // //     }

// // // // // // // // //     return 0;
// // // // // // // // // }

// // // // // // // // #include <bits/stdc++.h>
// // // // // // // // using namespace std;
// // // // // // // // void suffle(vector<int> &arr , int n)
// // // // // // // // {
// // // // // // // //     n = 4;
// // // // // // // //     int mid = arr[n];
// // // // // // // //     int midone =  arr[mid+1];
// // // // // // // //     for (int i = 0; i< mid; i++)
// // // // // // // //     {

// // // // // // // //     }

// // // // // // // // }
// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     // write code from here
// // // // // // // //     vector<int>arr = {1,2,3,4,4,3,2,1};

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // #include <bits/stdc++.h>
// // // // // // // using namespace std;
// // // // // // // double mergeTwoArray(vector<int> &arr1, vector<int> &arr2)
// // // // // // // {
// // // // // // //     int sum1 = 0;
// // // // // // //     int sum2 = 0;
// // // // // // //     int cnt1 = 0;
// // // // // // //     int cnt2 = 0;
// // // // // // //     double sumTotal = 0;
// // // // // // //     double counttotal = 0;
// // // // // // //     for (int i = 0; i < arr1.size(); i++)
// // // // // // //     {
// // // // // // //         sum1 += arr1[i];
// // // // // // //         cnt1++;
// // // // // // //     }
// // // // // // //     for (int i = 0; i < arr2.size(); i++)
// // // // // // //     {
// // // // // // //         sum2 += arr2[i];
// // // // // // //         cnt2++;
// // // // // // //     }

// // // // // // //     sumTotal = sum1 + sum2;
// // // // // // //     counttotal = cnt1 + cnt2;

// // // // // // //     return sumTotal / counttotal;
// // // // // // // }

// // // // // // // int main()
// // // // // // // {
// // // // // // //     // write code from here
// // // // // // //     vector<int> a1 = { 3};
// // // // // // //     vector<int> a2 = {-2,-1};
// // // // // // //     cout << mergeTwoArray(a1, a2);
// // // // // // //     return 0;
// // // // // // // }

// // // // // // #include <bits/stdc++.h>
// // // // // // using namespace std;
// // // // // // void mergeTwoArray(vector<int> array1, int n, vector<int> array2, int m)
// // // // // // {
// // // // // //     vector<int> array3(array1.size() + array2.size());
// // // // // //     // merge(array1.begin(), array1.end(), array2.begin(), array2.end(), array3.begin());

// // // // // //     int i = 0, j = 0, k = 0;

// // // // // //     while (i < n && j < m)
// // // // // //     {
// // // // // //         if (array1[i] < array2[j])
// // // // // //         {
// // // // // //             array3[k++] = array1[i++];
// // // // // //         }
// // // // // //         else
// // // // // //         {
// // // // // //             array3[k++] = array2[j++];
// // // // // //         }
// // // // // //     }
// // // // // //     while (i < n)
// // // // // //     {
// // // // // //         array3[k++] = array1[i++];
// // // // // //     }

// // // // // //     while (j < m)
// // // // // //     {
// // // // // //         array3[k++] = array2[j++];
// // // // // //     }

// // // // // //     for (auto i : array3)
// // // // // //     {
// // // // // //         cout << i << " ";
// // // // // //     }
// // // // // // }
// // // // // // int main()
// // // // // // {
// // // // // //     // write code from here
// // // // // //     vector<int> arr1 = {1, 2, 3};

// // // // // //     int n = 3;

// // // // // //     vector<int> arr2 = {4, 5, 6};

// // // // // //     int m = 3;

// // // // // //     mergeTwoArray(arr1, n, arr2, m);

// // // // // //     return 0;
// // // // // // }.

// // // // // #include <iostream>
// // // // // #include <math.h>
// // // // // using namespace std;

// // // // // int main()
// // // // // {
// // // // //     // write code from here
// // // // //     int max = INT16_MIN;
// // // // //     int s;
// // // // //     // for (int i = 0; i < 100; i++)
// // // // //     // {
// // // // //     //     s = pow(2, i);
// // // // //     // }

// // // // //     int n = 16;
// // // // //     if (n == s)
// // // // //     {
// // // // //         cout << "True" << endl;
// // // // //     }

// // // // //     cout << "False" << endl;
// // // // //     return 0;
// // // // // }
// // // // #include <iostream>
// // // // using namespace std;

// // // // int main()
// // // // {
// // // //     // write code from here
// // // //     int n = 4;
// // // //     int sum = 0;
// // // //     for (int i = 0; i <= 6; i++)
// // // //     {
// // // //         if (i % 2 == 0)
// // // //         {
// // // //             sum += i;
// // // //         }
// // // //     }
// // // //     cout << sum << endl;

// // // //     return 0;
// // // // }

// // // // C++ implementation of the approach
// // // #include <iostream>
// // // using namespace std;

// // // // Function to print the desired
// // // // Alphabet Z Pattern
// // // void alphabetPattern(int N)
// // // {

// // // 	int index, side_index, size;

// // // 	// Declaring the values of Right,
// // // 	// Left and Diagonal values
// // // 	int Top = 1, Bottom = 1, Diagonal = N - 1;

// // // 	// Loop for printing the first row
// // // 	for (index = 0; index < N; index++)
// // // 		cout  << "#"<<" ";

// // // 	cout << endl;

// // // 	// Main Loop for the rows from (2 to n-1)
// // // 	for (index = 1; index < N - 1; index++) {

// // // 		// Spaces for the diagonals
// // // 		for (side_index = 0; side_index < 2 * (N - index - 1);
// // // 			side_index++)
// // // 			cout << " ";

// // // 		// Printing the diagonal values
// // // 		cout << "#";

// // // 		cout << endl;
// // // 	}

// // // 	// Loop for printing the last row
// // // 	for (index = 0; index < N; index++)
// // // 		cout  << "#"<<" ";
// // // }

// // // // Driver Code
// // // int main()
// // // {
// // // 	// Number of rows
// // // 	int N = 8;

// // // 	alphabetPattern(N);

// // // 	return 0;
// // // }

// // // #include <iostream>
// // // using namespace std;
// // // bool check(int n)
// // // {
// // // 	if (n % 4 == 0)
// // // 	{
// // // 		return true;
// // // 	}

// // // 	else
// // // 	{
// // // 		return false;
// // // 	}
// // // }
// // // int main()
// // // {
// // // 	// write code from here
// // // 	int n;
// // // 	cin >> n;
// // // 	if (check(n))
// // // 	{
// // // 		cout << "True";
// // // 	}
// // // 	else
// // // 	{
// // // 		cout << "False";
// // // 	}

// // // 	return 0;
// // // }

// // // #include <iostream>
// // // #include <string>
// // // using namespace std;

// // // 	// Function that returns the cntgth of the last word in a string
// // // 	int lengthOfLastWord(string &s)
// // // 	{
// // // 		// Initialize variable to store the cntgth of the last word
// // // 		int cnt = 0;
// // //         bool flag = false;
// // // 		// Iterate backwards from the end of the string to the beginning
// // // 		for (int i = s.length() - 1; i >= 0; i--)
// // // 		{
// // // 			// If the current character is a space
// // // 			if (s[i] == ' ' && flag == true)
// // // 			{
// // // 				// Check if a last word has been found
// // // 				if (cnt)
// // // 				{
// // // 					// If a last word has been found, stop the loop
// // // 					break;
// // // 				}
// // // 			}
// // // 			// If the current character is not a space
// // // 			else if(s[i] != ' ')
// // // 			{
// // // 				// Increment the cntgth of the last word
// // // 				flag = true;
// // // 				cnt++;
// // // 			}
// // // 		}
// // // 		// Return the cntgth of the last word
// // // 		return cnt;
// // // 	}

// // // int main()
// // // {
// // // 	// write code from here
// // // 	string s = "hello world  ";
// // // 	cout << lengthOfLastWord(s);

// // // 	return 0;
// // // }

// // // #include <iostream>
// // // using namespace std;
// // // class Sum
// // // {
// // // private:
// // // 	int a, b;

// // // public:
// // // 	void Sumation(int val1, int val2)
// // // 	{
// // // 		a = val1;
// // // 		b = val2;
// // // 		cout << " The Addition is " << a << " + " << b << " is " << a + b << endl;
// // // 	}
// // // };
// // // int main()
// // // {
// // // 	// write code from here
// // // 	int a, b;
// // // 	cout << "Enter the value of a and b ";
// // // 	cin >> a >> b;
// // // 	Sum s1;
// // // 	s1.Sumation(a, b);

// // // 	return 0;
// // // }
// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // class PairSum
// // // {
// // // private:
// // // 	int target;
// // // 	vector<int> arr;

// // // public:
// // // 	int tar;
// // // 	vector<int> array;

// // // 	void FindPair(vector<int> arr, int target)
// // // 	{
// // // 		target = tar;
// // // 		arr = array;
// // // 		for (int i = 0; i < arr.size(); i++)
// // // 		{
// // // 			// if (arr[i] + arr[i + 1] == target)
// // // 			// {
// // // 			// }
// // // 			for (int j = i + 1; j < arr.size(); j++)
// // // 			{
// // // 				if (arr[i] + arr[j] == target)
// // // 				{
// // // 					arr.push_back(i);
// // // 					arr.push_back(j);
// // // 				}
// // // 			}
// // // 		}
// // // 		// cout << arr << endl;
// // // 		for (int i = 0; i < arr.size(); i++)
// // // 		{
// // // 			cout << arr[i] << " ";
// // // 		}
// // // 	}
// // // };
// // // int main()
// // // {
// // // 	// write code from here
// // // 	vector<int> arr = {1, 2, 3, 4, 5};
// // // 	int target = 5;
// // // 	PairSum S1;
// // // 	S1.FindPair(arr, target);

// // // 	return 0;
// // // }

// // #include <iostream>
// // using namespace std;
// // void paris(int arr[], int n, int k)
// // {
// // 	int count = 0;
// // 	for (int i = 0; i < n - 1; i++)
// // 	{
// // 		// for (int j = i+1; j < n; j++)
// // 		// {
// // 		// 	if(arr[i] + arr[j]  == k){
// // // 		//         count++;
// // // 		// 	}
// // // 		// }
// // // 		int j = i+1;
// // // 		if (arr[i] + arr[j] == k)
// // // 		{
// // // 			j++;
// // // 			count++;
// // // 		}
// // // 	}

// // // 	cout << count << endl;
// // // }
// // // int main()
// // // {
// // // 	// write code from here
// // // 	int arr[] = {1, 5, 7, 1};
// // // 	int n = sizeof(arr) / sizeof(arr[0]);
// // // 	int k = 6;
// // // 	paris(arr, n, k);

// // // 	return 0;
// // // }

// // // #include <iostream>
// // // using namespace std;
// // // bool isPalindrome(int num)
// // // {
// // // 	int temp = num;
// // // 	int digit;
// // // 	int rem = 0;
// // // 	while (num != 0)
// // // 	{
// // // 		digit = num % 10;
// // // 		rem = (rem * 10) + digit;
// // // 		num = num / 10;
// // // 	}

// // // 	if (temp == rem)
// // // 	{
// // // 		return true;
// // // 	}
// // // return false;
// // // }

// // // int Palindrome(int arr[], int n)
// // // {
// // // 	for (int i = 0; i < n; i++)
// // // 	{
// // // 		if (isPalindrome(arr[i]))
// // // 		{
// // // 			return true;
// // // 		}
// // // 	}
// // // 	return false;
// // // }
// // // #include <iostream>
// // // #include <string>
// // // using namespace std;

// // // int PalinArray(int A[], int n) {
// // //     for (int i = 0; i < n; i++) {
// // //         string num = to_string(A[i]); // convert the number to a string
// // //         int left = 0, right = num.size() - 1;
// // //         while (left < right) {
// // //             if (num[left] != num[right]) {
// // //                 return 0; // not a palindrome, return 0
// // //             }
// // //             left++;
// // //             right--;
// // //         }
// // //     }
// // //     return 1; // all elements are palindromes, return 1
// // // }

// // #include <iostream>
// // using namespace std;

// // int PalinArray(int A[], int n) {
// //     for (int i = 0; i < n; i++) {
// //         int num = A[i];
// //         int rev = 0, temp = num;
// //         while (temp > 0) {
// //             rev = rev*10 + temp%10;
// //             temp /= 10;
// //         }
// //         if (num != rev) {
// //             return 0; // not a palindrome, return 0
// //         }
// //     }
// //     return 1; // all elements are palindromes, return 1
// // }

// // int main()
// // {
// // 	// write code from here
// // 	// int num = 121;
// // 	// if(isPalindrome(num)){
// // 	// 	cout<<"True";
// // 	// }
// // 	// else{
// // 	// 	cout<<"False";
// // 	// }

// // 	// int arr[] = {111, 222, 333};
// // 	   int arr[]={101,121,10};
// // 	int n = sizeof(arr) / sizeof(arr[0]);
// // 	cout << PalinArray(arr, n);
// // 	return 0;
// // }

// #include <iostream>
// #include<list>
// #include<string>
// #include<vector>
// using namespace std;
// void Problem(vector<string> lables){
    
//     vector<string>res;
//    for (int i = 0; i < lables.size(); i++)
//    {
//      if((lables[i-1] && lables[i]  && lables[i-1])=="White"){
//            res += "Tushar";
//      }


//    }
   
    
// }
// int main() {
// //write code from here 

// vector<string> lables ={"White","White","White","Dark","Dark"};
 

//       return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;

// string chocolate_game(vector<string>& labels) {
//     int n = labels.size();
//     unordered_set<int> remaining_chocolates;
//     for (int i = 0; i < n; i++) {
//         remaining_chocolates.insert(i);
//     }
//     string current_player = "Tushar";
//     int last_move = -1;

//     while (!remaining_chocolates.empty()) {
//         unordered_set<int> possible_moves;
//         for (int i : remaining_chocolates) {
//             if (labels[i] == "White") {
//                 if ((i > 0 && labels[i-1] == "White") && (i < n-1 && labels[i+1] == "White")) {
//                     possible_moves.insert(i);
//                 }
//             } else {
//                 if ((i > 0 && labels[i-1] == "Dark") && (i < n-1 && labels[i+1] == "Dark")) {
//                     possible_moves.insert(i);
//                 }
//             }
//         }

//         if (possible_moves.empty()) {
//             return (current_player == "Tushar") ? "Shubh" : "Tushar";
//         }

//         int move;
//         if (current_player == "Tushar") {
//             move = *min_element(possible_moves.begin(), possible_moves.end(), [&](int a, int b) {
//                 return abs(a - last_move) < abs(b - last_move);
//             });
//         } else {
//             move = *max_element(possible_moves.begin(), possible_moves.end(), [&](int a, int b) {
//                 return abs(a - last_move) < abs(b - last_move);
//             });
//         }

//         remaining_chocolates.erase(move);
//         last_move = move;
//         current_player = (current_player == "Tushar") ? "Shubh" : "Tushar";
//     }

//     return (current_player == "Shubh") ? "Tushar" : "Shubh";
// }

// int main() {
//     vector<string> labels = {"White", "White", "White", "Dark", "White", "Dark", "Dark"};
//     cout << chocolate_game(labels) << endl;  // Output: "Tushar"
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// string chocolate (vector<string>& lables){
//   int n = lables.size();
//   for(int i=0;i<n;i++){
    
//     if(lables[i] = "White"){
      
//       if((i > 0 && lables[i-1]) == "White" && (i < n-1 && lables[i+1])=="White"){
        
//         cout<< "Tushar"<<endl;
        
//       }
//     }
//     else if(lables[i]="Black"){
      
//        if((i > 0 && lables[i-1]) == "Black" && (i < n-1 && lables[i+1])=="Black"){
         
//         cout<< "Shub"<<endl;
        
//       }
//     }
//   }
// }

// int main() 
// {
//   vector<string> str = {"White","White","White"};
//   cout<<chocolate(str);
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
bool parthansis(string arr){
  if(arr.length()==0){
      return true;
  }
  int index =0;
  stack<char> stack;
  while(index <= arr.length()){
   if(arr[index] =='(' && arr[index] =='{' && arr[index] =='['){
    stack.push(arr[index]);
   }
   else if(arr[index] == ')' &&!stack.empty(),)

  }



}
int main() {
//write code from here 

      return 0;
}