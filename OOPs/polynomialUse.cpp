#include <bits/stdc++.h>
#include "polynomial.cpp"

using namespace std;

int main()
{
    int degree[]={2,1,0,4,7,8};
    int coeff[]={3,1,5,-3,2,3};
    Polynomial p1(6,degree,coeff);
    p1.print();
    Polynomial p3;
    int degree1[]={5,2,1,0,3};
    int coeff1[]={3,5,2,7,2};
    Polynomial p2(5,degree1,coeff1);
    p2.print();
    p3 = p1.add(p2);
    p3.print();
}