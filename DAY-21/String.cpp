#include <bits/stdc++.h>
using namespace std;

class String
{
    string s;

public:
    String(string s = "")
    {
        this->s = s;
    }

    String(String *s1)
    {
        String s2;
        s2.s = s;
    }

    ~String()
    {
        s = "";
    }

    void display()
    {
        cout << s << endl;
    }

    String change(int i, char ch)
    {
        s[i] = ch;
        return this;
    }

    int operator==(String s1)
    {
        int mx = max(s1.s.length(), s.length());
        for (int i = 0; i < mx; i++)
        {
            if(s1.s[i]!=s[i])
            return s1.s[i]-s[i];
        }
        return 0;
    }

    String operator+(String s1)
    {
        int len = s.length() + s1.s.length();
        char *s3 = new char[len];
        // string s3="";
        for(int i=0;i<s.length();i++)
        {
            s3[i] = s[i];
        }
        for(int i=0; i<s1.s.length() ; i++)
        {
            s3[i+s.length()] = s1.s[i];
        }
        String s2(s3);
        return s2;

    }

    String operator-()
    {
        string s1;
        for(int i=(s.length()-1);i>=0;i--)
        {
            s1 = s1+ s[i];
        }
       String sNew(s1);
        return sNew;
    }
};