
#include <bits/stdc++.h>
using namespace std;

string chocolate(vector<string> lables)
{
    int n = lables.size();
    // for (int i = 0; i < n-1; i++)
    // {

    //     if (lables[i] == "White")
    //     {

    //         if ((i > 0 && lables[i - 1] == "White") && (i < n - 1 && lables[i + 1] == "White"))
    //         {

    //             return "Tushar";
    //         }
    //     }
    //     else if (lables[i] == "Black")
    //     {

    //         if ((i > 0 && lables[i - 1] == "Black") && (i < n - 1 && lables[i + 1] == "Black"))
    //         {

    //             return "Shub";
    //         }
    //     }
    // }
    // return "Shubh";
    int cntWhite = 0;
    int cntBlack = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (lables[i] == "White")
        {
            cntWhite++;
        }
        else
        {
            cntBlack++;
        }
    }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (lables[i] == "Black")
    //     {
    //     }
    // }

    if (cntWhite > cntBlack)
    {
        return "Tushar";
    }
    else if (cntBlack > cntWhite)
    {
        return "Shubh";
    }
}

int main()
{
    // vector<string> str = {"White", "White", "White","Black","White"};
    // vector<string> str = {"White", "Dark", "Dark", "White", "White", "White", "Dark", "Dark", "White", "Dark" ,"Dark" ,"White" ,"White", "Dark", "White" ,"Dark", "Dark", "Dark" ,"White", "Dark" ,"White" ,"Dark", "Dark", "Dark" ,"White", "White", "Dark", "White", "Dark", "Dark", "White" ,"White" ,"White", "White", "Dark", "Dark", "White" ,"White" ,"White", "Dark"};
    vector<string> str = {"White", "Dark", "White", "Dark", "Dark", "Dark", "White", "Dark", "White", "Dark"};
    // vector<string> str = {"Black","Black","Black"};
    cout << chocolate(str);

    return 0;
}