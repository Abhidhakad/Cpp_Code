#include <bits/stdc++.h>
using namespace std;

string reorganizeString(string s)
{
    int hash[26] = {0};
    int n = s.length();

    // Step 1: Count frequency
    for (char ch : s)
    {
        hash[ch - 'a']++;
    }

    // Step 2: Find max occurring character
    int maxFreq = 0;
    char maxOccChar;

    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > maxFreq)
        {
            maxFreq = hash[i];
            maxOccChar = i + 'a';
        }
    }

    // Step 3: Place max occurring character at even indices
    int index = 0;
    while (index < n && maxFreq > 0)
    {
        s[index] = maxOccChar;
        index += 2;
        hash[maxOccChar - 'a']--;
        maxFreq--;
    }

    // Step 4: If still left → impossible
    if (maxFreq > 0)
    {
        return "";
    }

    // Step 5: Place remaining characters
    for (int i = 0; i < 26; i++)
    {
        while (hash[i] > 0)
        {
            if (index >= n)
                index = 1;
            s[index] = i + 'a';
            index += 2;
            hash[i]--;
        }
    }

    return s;
}

int main()
{
    string s = "aab";

    string ans = reorganizeString(s);

    cout << "organized str: " << ans << endl;

    return 0;
}