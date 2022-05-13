#include <bits/stdc++.h>
using namespace std;

#include <queue> 

void reverse(queue<int> &que)
{
    if(que.empty())
        return;
    int data = que.front();
    que.pop();
    reverse(que);
    que.push(data);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        queue<int>q;
        int n;
        cin >> n;
        while (n--)
        {
            int ele;
            cin >> ele;
            q.push(ele);
        }
        reverse(q);
        while(!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
    }
}