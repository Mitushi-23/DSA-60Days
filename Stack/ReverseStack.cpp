#include <bits/stdc++.h>
using namespace std;
#include <stack>

int main()
{
    stack<int>s1;
    stack<int>s2;
    int n;
    cin >> n;
    while(n--)
    {
        int ele;
        cin >> ele;
        s1.push(ele);
    }
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    while(!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }
    cout << endl;
}