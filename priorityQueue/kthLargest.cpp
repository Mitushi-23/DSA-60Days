#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<int>p;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin >> ele;
        p.push(ele);
    }
    int k;
    cin >> k;
    while(k>1)
    {
        p.pop();
        k--;
    }
    cout << p.top() << endl;
}