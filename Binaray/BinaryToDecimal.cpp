#include <iostream>
#include <math.h>
using namespace std;
void BinaryToDecimal(void)
{
      int a;
      cin >> a;
      int ans = 0;
      int i = 0;

      while (a != 0)
      {
            int digit = a % 10;

            if (digit == 1)
            {
                  ans = ans + pow(2, i);
            }
            a = a / 10;
            i++;
      }

      cout << ans << endl;
}
int main()
{
      // write code from here
      BinaryToDecimal();

      return 0;
}