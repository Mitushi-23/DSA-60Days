#include <bits/stdc++.h>
using namespace std;
#include <stack>

int main()
{
    string s;
    cin >> s;
    stack<char> s1;
    stack<int> s2;
    s2.push(-1);
    int l = s.length();
    int count = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == ')')
        {
            while (s1.top() != '(')
            {
                ++count;
                s1.pop();
            }
            if (s1.top() == '(')
            {
                if (count <= 1)
                {
                    cout << "True" << endl;
                    return 0;
                }
                count = 0;
                s1.pop();
                continue;
            }
        }
        s1.push(s[i]);
    }
    cout << "False" << endl;
    return 0;
}