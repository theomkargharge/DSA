/*
RECURSION
Two parts of Recusrion
first ---> base case (in base case return is maindataory) which means when to stop
second---> we need to find recursive relation



main concept is depend on
the big problem is depend on samll problem that we need to find


*/

#include <iostream>
using namespace std;

int factorial(int n)
{

      /*In this example
        The Base case  is : 0! = 1;
          5! = 5*4*3*2*1;
          The big problem is : 5!
          The Samall Probelm is :(n-1)! = 4! = 5*4

          The recursive relation of this example is:
          f(n)= n* f(n-1);
      */

      //     base case
      if (n == 0)
            return 1;
      // int samllproblem = factorial(n - 1);
      // int bigproblem = n * samllproblem;
      // return bigproblem;

      return n * factorial(n - 1);
}

int main()
{
      // write code from here
      int n;
      cin >> n;
      int ans = factorial(n);
      cout << ans << endl;
      return 0;
}