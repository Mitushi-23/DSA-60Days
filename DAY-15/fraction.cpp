#include <bits/stdc++.h>

using namespace std;

class fraction
{
    private:
    int numenator;
    int denominator;
    public:
    fraction(int numenator, int denominator)
    {
        this -> numenator = numenator;
        this ->denominator =  denominator;
    }

    void print()
    {
        cout << this ->numenator << "/" << denominator << endl;
    }

    void simplify()
    {
        int gcd=1;
        int j = min(this->numenator, this->denominator);
        for(int i=1;i<=j;i++)
        {
            if(this->numenator %i ==0 && this->denominator %i ==0)
            gcd=i;
        }
        this ->numenator = this ->numenator / gcd;    
        this ->denominator = this ->denominator / gcd;    
    }

    void add(fraction const &f2)
    {
        int lcm = denominator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/ f2.denominator;
        int num = x* numenator + y * f2.numenator;
        numenator = num;
        denominator = lcm;
        simplify();
    }

    void multiply(fraction f2)
    {
        numenator = numenator * f2.numenator;
        denominator = denominator * f2.denominator;
        simplify();
    }
};
