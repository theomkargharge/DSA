#include <iostream>
#include <string>
using namespace std;

	// Function that returns the cntgth of the last word in a string
	int lengthOfLastWord(string &s)
	{
		// Initialize variable to store the cntgth of the last word
		int cnt = 0;
        bool flag = false;
		// Iterate backwards from the end of the string to the beginning
		for (int i = s.length() - 1; i >= 0; i--)
		{
			// If the current character is a space
			if (s[i] == ' ' && flag == true)
			{
				// Check if a last word has been found
				if (cnt)
				{
					// If a last word has been found, stop the loop
					break;
				}
			}
			// If the current character is not a space
			else if(s[i] != ' ')
			{
				// Increment the cntgth of the last word
				flag = true;
				cnt++;
			}
		}
		// Return the cntgth of the last word
		return cnt;
	}

int main()
{
	// write code from here
	string s = "hello world  ";
	cout << lengthOfLastWord(s);

	return 0;
}
