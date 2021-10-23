#include <bits/stdc++.h>

#include "fraction.cpp"
using namespace std;

int main()
{
    fraction f1(10, 2);
    fraction f2(15, 4);

    f1.print();
    f2.print();

    fraction f3 = f1 + f2;
    f3.print();
    fraction f4 = f1.add(f2);
    f4.print();

    fraction f5 = f1.multiply(f2);
    f5.print();
    f1.print();
    f2.print();
    fraction f6 = f1 * f2;
    f6.print();

    if (f1 == f2)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;
    ++f1;
    f1.print();
    ++(++f1);
    f1.print();
    fraction f7 = ++(++f1);
    f7.print();

    fraction f8= f1++;
    f1.print();
    f8.print();

    (f1+=f2)+=f2;
    f1.print();
}