#include <bits/stdc++.h>
using namespace std;

// leetcode problem 290

bool wordPattern(string pattern, string s)
{

    vector<string> words;
    string word = "";

    // split s by space
    for (int i = 0; i <= s.length(); i++)
    {
        if (i == s.length() || s[i] == ' ')
        {
            words.push_back(word);
            word = "";
        }
        else
        {
            word += s[i];
        }
    }

    if (pattern.length() != words.size())
        return false;

    unordered_map<char, string> mp1; // pattern -> word
    unordered_map<string, char> mp2; // word -> pattern

    for (int i = 0; i < pattern.length(); i++)
    {

        if (mp1.count(pattern[i]) && mp1[pattern[i]] != words[i])
            return false;

        if (mp2.count(words[i]) && mp2[words[i]] != pattern[i])
            return false;

        mp1[pattern[i]] = words[i];
        mp2[words[i]] = pattern[i];
    }

    return true;
}

int main()
{
    string pattern = "abba";
    string s = "dog cat cat dog";
    if (wordPattern(pattern, s))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}