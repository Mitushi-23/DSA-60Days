#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int,int_fast32_t>pair_diff;
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        pair_diff[arr[i]]++;
    }
    int diff;
    cin >> diff;
    int count=0;
    for(int i=0;i<n;i++)
    {
        int curr=arr[i];
        if(pair_diff[curr]==true)
        {
            continue;
        }
        if(pair_diff.count(curr-diff)>0 && pair_diff[curr-diff]==false)
        {
            pair_diff[curr]=true;
            cout << pair_diff.count(curr-diff) << endl;
            pair_diff[curr-diff]=true;
            ++count;
            continue;
        }
        if(pair_diff.count(curr+diff)>0 && pair_diff[curr+diff]==false)
        {
            pair_diff[curr]=true;
            pair_diff[curr+diff]=true;
            ++count;
            continue;
        }
    }
    cout << count << endl;
}