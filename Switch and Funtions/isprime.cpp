#include <iostream>
using namespace std;
// to check number is prime or not using definig the prime fution
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    // write code from here
    int n;
    cin >> n;
    if(isPrime(n)){
        cout<<"Number is prime"<<endl;
    }
    else{
        cout<<"Number is not prime"<<endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;
// int update(int a)
// {
//     a -= 5;
//     return a;
// }
// int main()
// {
//     // write code from here
//     int a = 15;
//     cout<<update(a)<<endl;
//     cout << a << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int update(int a)
// {
//     int ans = a * a;
//     return ans;
// }
// int main()
// {
//     // write code from here
//     int a = 14;
//     a = update(a);
//     cout << a << endl;

//     return 0;
// }