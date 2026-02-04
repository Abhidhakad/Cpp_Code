#include <iostream>
using namespace std;

int getLength(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        i++;
    }
    return i;
}

int find(char str[], char word[])
{
    int n = getLength(str);
    int m = getLength(word);

    // Edge case: empty word
    if (m == 0)
        return 0;

    // Loop only till where word can fit
    for (int i = 0; i <= n - m; i++)
    {
        bool matched = true;

        // Check characters of word
        for (int j = 0; j < m; j++)
        {
            if (str[i + j] != word[j])
            {
                matched = false;
                break;
            }
        }

        if (matched)
        {
            return i; // first occurrence
        }
    }

    return -1; // not found
}

int main()
{
    char str[1000] = "hello this is string that we want to find";
    char word[10] = "this";

    int index = find(str, word);
    cout << "index: " << index << endl;

    return 0;
}