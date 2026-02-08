#include <iostream>

using namespace std;

bool isValid(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return true;
    }
    return false;
}
string reverseOnlyLetters(string s)
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
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
    return s;
}

int main()
{
    string s = "a-bC-dEf-ghIj";

    cout<<reverseOnlyLetters(s);
    return 0;
}