#include <bits/stdc++.h>
using namespace std;

class Polynomial
{
    int *degCoeff;
    int capacity;

public:
    Polynomial()
    {
        degCoeff = new int[5];
        capacity = 5;
    }
    Polynomial(int n, int degree[], int coeff[])
    {
        while (n > capacity)
        {
            capacity *= 2;
        }
        for (int i = 0; i < capacity; i++)
        {
            degCoeff[degree[i]] = coeff[i];
        }
    }

    Polynomial add(Polynomial &p2){
           int mx = max(p2.capacity,this->capacity);
           int *dcoef = new int [mx];
           int deg[mx];
           for(int i=0;i<mx;i++)
           {
               dcoef[i] = this->degCoeff[i] + p2.degCoeff[i];
           }  
           Polynomial p3(mx,deg,dcoef);
           return p3;
    }

        void print()
    {
        for (int i = 0; i < capacity; i++)
        {
            if (degCoeff[i] != 0)
                cout << degCoeff[i] << "*x" << i << "+ ";
        }
        cout << endl;
    }
};