#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("Enter a number : ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    // if(temp==sum)
    // printf("Number is Palindrome");
    // else
    // printf("Number is not Palindrome");
    // return 0;
    printf("the reverse number is : %d", sum);
}