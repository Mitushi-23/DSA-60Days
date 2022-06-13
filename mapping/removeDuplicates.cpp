#include <bits/stdc++.h>

using namespace std;

vector<int> removeDup(int arr[], int size)
{
    vector<int> newVector;
    unordered_map<int, bool> seen;
    for (int i = 0; i < size; i++)
    {
        if (seen.count(arr[i]) > 0)
        {
            continue;
        }
        seen[arr[i]] = true;
        newVector.push_back(arr[i]);
    }
    return newVector;
}

int main()
{
    int arr[] = {1, 5, 4, 3, 2, 4, 5, 3, 4, 1, 6, 7, 6, 9};
    vector<int> ouput = removeDup(arr, 14);
    for (int i = 0; i < ouput.size(); i++)
    {
        cout << ouput[i] << " ";
    }
    cout << endl;
}