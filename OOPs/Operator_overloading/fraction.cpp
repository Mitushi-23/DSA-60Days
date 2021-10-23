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
        this->numenator = numenator;
        this->denominator = denominator;
    }

    void print()
    {
        cout << this->numenator << "/" << denominator << endl;
    }

    void simplify()
    {
        int gcd = 1;
        int j = min(this->numenator, this->denominator);
        for (int i = 1; i <= j; i++)
        {
            if (this->numenator % i == 0 && this->denominator % i == 0)
                gcd = i;
        }
        this->numenator = this->numenator / gcd;
        this->denominator = this->denominator / gcd;
    }

    // void add(fraction const &f2) const
    // {
    //     int lcm = denominator * f2.denominator;
    //     int x = lcm / denominator;
    //     int y = lcm / f2.denominator;
    //     int num = x * numenator + y * f2.numenator;
    //     numenator = num;
    //     denominator = lcm;
    //     simplify();
    // }
    fraction add(fraction const &f2) const
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numenator + y * f2.numenator;
        fraction Fnew(num, lcm);
        Fnew.simplify();
        return Fnew;
    }

    fraction operator+(fraction const &f2) const
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numenator + y * f2.numenator;
        fraction Fnew(num, lcm);
        Fnew.simplify();
        return Fnew;
    }

    // void multiply(fraction const &f2) const
    // {
    //     numenator = numenator * f2.numenator;
    //     denominator = denominator * f2.denominator;
    //     simplify();
    // }

    fraction multiply(fraction const &f2) const
    {
        int num = numenator * f2.numenator;
        int deno = denominator * f2.denominator;
        fraction fnew(num, deno);
        fnew.simplify();
        return fnew;
    }

    fraction operator*(fraction const &f2) const
    {
        int num = numenator * f2.numenator;
        int deno = denominator * f2.denominator;
        fraction fnew(num, deno);
        fnew.simplify();
        return fnew;
    }

    bool operator==(fraction const &f2) const
    {
        return (numenator == f2.numenator && denominator == f2.denominator);
    }

    // Pre increament operator

    /* fraction operator++(){                          In this if we print ++(++f1) then only ++f1 will be printed and if we store ++(++f1) in f3 and print f3 then whole ans is printed.
                                                         To avoid this the fraction should be passed by referance so that a copy of f1 is not made and changes can be done in f1 only.
         numenator = numenator+ denominator;   
         simplify();
         return *this;
     }**/

    fraction &operator++()
    { // Here the fraction is passed by referance
        numenator = numenator + denominator;
        simplify();
        return *this;
    }

    // Post Increament Operator -> no nested increament is done

    fraction operator++(int)
    {
        fraction fnew(numenator, denominator);
        numenator = numenator + denominator;
        simplify();
        fnew.simplify();
        return fnew;
    }

    fraction& operator+=(fraction f2)
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numenator + y * f2.numenator;
        numenator = num;
        denominator = lcm;
        simplify();
        return *this;
    }
};
