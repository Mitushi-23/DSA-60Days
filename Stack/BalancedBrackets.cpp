#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
    stack<char> s1;
    string s;
    cin >> s;
    int len = s.length();
    int i = 0;
    while (i < len)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            s1.push(s[i]);
            // i++;
        }
        else
        if(s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if(s1.empty())
            {
                cout << "false" << endl;
                return 0;
            }
            if ((s[i] == ')' && s1.top() != '(') || (s[i] == '}' && s1.top() != '{') || (s[i] == ']' && s1.top() != '['))
            {
                cout << "false" << endl;
                return 0;
            }
            else
            {
                s1.pop();
            }
        }
        i++;
    }
    if (s1.empty())
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}