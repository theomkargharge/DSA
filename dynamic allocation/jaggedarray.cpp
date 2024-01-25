// #include <iostream>
// #include<array>
// using namespace std;

// int main() {
// //write code from here 
//    int row;
//    cin >> row;

//    int **arr = new int *[row];
//    for (int i = 0; i < row; i++)
//    {
//       int col;
//       cin>>col;
//       arr[i] = new int [col];
//    }


//    for (int i = 0; i < row; i++)
//    {
//      for (int j = 0; j < arr[i].size(); j++)
//      {
//         cin>>
//      }
     
//    }
   #include <iostream>

using namespace std;

int main() {
  // Read in the size of the jagged array
  int size;
  cin >> size;

  // Create the jagged array
  int** jaggedArray = new int*[size];

  // Read in the sizes of the inner arrays and create them
  for (int i = 0; i < size; i++) {
    int innerSize;
    cin >> innerSize;
    jaggedArray[i] = new int[innerSize];
  }

  // Read in the values for the inner arrays
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < sizeof(jaggedArray[i]); j++) {
      cin >> jaggedArray[i][j];
    }
  }

  // Print out the jagged array
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < sizeof(jaggedArray[i]); j++) {
      cout << jaggedArray[i][j] << " ";
    }
    cout << endl;
  }

  // Don't forget to delete the inner arrays to prevent memory leaks!
  for (int i = 0; i < size; i++) {
    delete[] jaggedArray[i];
  }
  // Delete the outer array
  delete[] jaggedArray;

  return 0;
}

   

//       return 0;
// }