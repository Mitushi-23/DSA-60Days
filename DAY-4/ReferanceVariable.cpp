#include <bits/stdc++.h>

using namespace std;

void increament(int n) //value is passed as a copy
{
    n++;
}

void increament1(int &n1) //value is passed as a referance
{
    n1++;
}

//This is wrong as referance cannot be returned
int &f(int n)
{
    n++;
    return n;
}

//this is wrong as address cannot be returned
int *f2()
{
    int i=10;
    return &i;
}



int main()
{
    int i = 10;
    int j = i; // copy of i is made and stored in j
    i++;
    cout << j << endl; //no change in value of j it will print 10 only
    //for changing the value if j we can referance it
    int a=10;
    int &b = a;// here b is a reference variable of a i.e a variable with two different names a and b. Thus any changes done in b will reflect in a . Here a and b both are pointing to same memory.
    a++;
    cout << b << endl; // here the value of b is now 11
    b++;
    cout << a << endl; //output will be 12

    int k=100;
    b=k;
    cout << a << endl; // output will be 100 as the value of b is k i.e 100 so the value of a will also be k i.e 100

   // int &c; // error declaration of referance variable c requires an initializer
    //c=a;

    increament(a);//value of a is not increased as it is passed as a copy
    cout << a << endl; 
    increament1(a);// value of a is increased as a is passed as a referance
    cout << a << endl;

    int &k1 = f(a);
    int *p = f2();
}