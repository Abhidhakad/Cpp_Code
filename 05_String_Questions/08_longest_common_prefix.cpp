#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string> &strs)
{

    if (strs.size() == 0)
        return "";

    string ans = "";

    for (int i = 0; i < strs[0].length(); i++)
    {
        char ch = strs[0][i];
        bool match = true;

        for (int j = 1; j < strs.size(); j++)
        {
            if (i >= strs[j].length() || strs[j][i] != ch)
            {
                match = false;
                break;
            }
        }

        if (match)
        {
            ans.push_back(ch);
        }
        else
        {
            break;
        }
    }

    return ans;
}

int main()
{
    vector<string> str = {"flower", "flow", "flight"};

    cout << longestCommonPrefix(str) << endl;

    return 0;
}


// another approch we can do first sort and after that we can find common..
