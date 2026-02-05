#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// using brutefroce technique
int getLPSLength(string &s)
{
    int n = s.length();

    vector<string> pre;
    vector<string> suf;

    // Proper prefixes (exclude full string)
    for (int i = 0; i < n - 1; i++)
    {
        string temp = "";
        for (int j = 0; j <= i; j++)
        {
            temp.push_back(s[j]);
        }
        pre.push_back(temp);
    }

    // Proper suffixes (exclude full string)
    for (int i = 1; i < n; i++)
    {
        string temp = "";
        for (int j = i; j < n; j++)
        {
            temp.push_back(s[j]);
        }
        suf.push_back(temp);
    }

    int maxLength = 0;

    for (int i = 0; i < pre.size(); i++)
    {
        for (int j = 0; j < suf.size(); j++)
        {
            if (pre[i] == suf[j])
            {
                int len = pre[i].length();
                maxLength = max(maxLength, len);
            }
        }
    }

    return maxLength;
}

int getLPSLength1()
{
    int n = s.length();

    vector<int> lps(s.size(), 0);
    int pre = 0, suf = 1;

    while (suf < s.size())
    {
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++, suf++;
        }
        else
        {
            if (pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }
    return lps[s.size()-1];
}

int main()
{
    string s = "aaaabcaaaasdfghaahji";

    int legnth = getLPSLength1(s);

    cout<<"len "<<length<<endl;
    return 0;
}
