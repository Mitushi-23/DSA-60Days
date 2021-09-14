#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Pointers
    int i;
    cout << i << endl;
    int *p = &i;
    cout << *p << endl;
    float f = 12.3;
    float *pf = &f;
    int d=2.6;
    int *pd = &d;
    cout << sizeof(p) << endl;
    i=10;
    cout << i << endl;
    *p = 12;
    cout << *p << endl;

    int a =*p;
    a++;
    cout << a << " " << *p << endl;
    (*p)++;
    cout << *p << endl;
    cout << p << endl;
    p=p+2;
    cout << p << endl;
    p=p-2;
    cout << p << endl;

    double d1=12.5;
    double *dp = &d1;
    cout << dp << endl;

    //array and pointer
    int arr[10];
    cout << arr << endl;
    cout << &arr[0] << endl;
    arr[0]=5;
    arr[1]=12;
    cout << *arr << endl;
    cout << *(arr+1) << endl;

    int *p1= &arr[0];
    cout << p1 << endl;
    cout << a << endl;

    cout << &p1 << endl;
    cout << &a << endl;

    p1=p1+1;
    a=a+1;
    cout << p1 << " " << a << endl;    

}