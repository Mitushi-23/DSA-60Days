#include <bits/stdc++.h>

using namespace std;

vector<char> removeDup(string s, int size)
{
    vector<char> newVector;
    unordered_map<char, bool> seen;
    for (int i = 0; i < size; i++)
    {
        if (seen.count(s[i]) > 0)
        {
            continue;
        }
        seen[s[i]] = true;
        newVector.push_back(s[i]);
    }
    return newVector;
}

int main()
{
   string s;
   cin >> s;
    vector<char> ouput = removeDup(s, s.length());
    for (int i = 0; i < ouput.size(); i++)
    {
        cout << ouput[i];
    }
    cout << endl;
}