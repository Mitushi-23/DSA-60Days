#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++)
    {
        cin >> input[i];
    }
    int k;
    cin >> k;
    priority_queue<int, vector<int>, greater<int>>p;
    for(int i=0;i<k;i++)
    {
        p.push(input[i]);
    }

    for(int i=k;i<n;i++)
    {
        if(input[i]>p.top())
        {
            p.pop();
            p.push(input[i]);
        }
    }
    while(!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }
    cout << endl;
}