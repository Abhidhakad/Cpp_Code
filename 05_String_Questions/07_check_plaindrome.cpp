// leetcode  question 125

#include <bits/stdc++.h>
using namespace std;

bool isValid(char ch)
{
    return (ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch >= '0' && ch <= '9');
}

char toLower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
        if (!isValid(s[start]))
        {
            start++;
        }
        else if (!isValid(s[end]))
        {
            end--;
        }
        else
        {
            if (toLower(s[start]) != toLower(s[end]))
            {
                return false;
            }
            start++;
            end--;
        }
    }
    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";

    if (isPalindrome(s))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "yes" << endl;
    }

    return 0;
}
