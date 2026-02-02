#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr)
{
    int n = arr.size();
    int j = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1];
    return j;
}

vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                           vector<int> &arr3)
{

    vector<int> ans;
    int i = 0, j = 0, k = 0;

    int n1 = removeDuplicates(arr1);
    int n2 = removeDuplicates(arr2);
    int n3 = removeDuplicates(arr3);

    arr1.resize(n1);
    arr2.resize(n2);
    arr3.resize(n3);

    while (i < n1 && j < n2 && k < n3)
    {

        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    if (ans.empty())
        return {-1};
    return ans;
}

int main()
{
    vector<int> arr1{1, 1, 1, 2, 2, 2};
    vector<int> arr2{1, 1, 2, 2, 2};
    vector<int> arr3{1, 1, 1, 1, 2, 2, 2, 2};

    vector<int> result = commonElements(arr1, arr2, arr3);

    for (int x : result)
        cout << x << " ";

    return 0;
}
