#include <iostream>
#include <vector>

using namespace std;

bool isAnagram(string s, string t)
{
    vector<int> hash(256, 0);

    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i]]++;
    }
    for (int i = 0; i < t.length(); i++)
    {
        hash[t[i]]--;
    }

    for (auto it : hash)
    {
        if (it != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "nagarm";
    string t = "anrmag";

    if (isAnagram(s, t))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}