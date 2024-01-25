#include <bits/stdc++.h>
using namespace std;
void range(string &str)
{
   for (char i = 'a'; i < 'z'; i++)
   {
      if (str[i])
      {
         str.erase(i);
      }
   }

   cout << str << endl;
}

// string reMoveChar(string str, int n)
// {
//    for (int i = 0; i < str.length(); i++)
//    {

//       if (range(str))
//       {
//          str.erase(str[i], 1);
//       }
//    }

// }
int main()
{
   // write code from here
   string str = "omkargharge45";
   range(str);

   return 0;
}