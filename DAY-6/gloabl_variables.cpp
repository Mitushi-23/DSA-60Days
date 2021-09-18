/*
 We can change the value of global variables at any time therefore we should avoid using global variables instead of that we can pass the value by referacne in the function to change it.
*/

#include <bits/stdc++.h>
using namespace std;
 int i=10;
 void g()
 {
     i++;
     cout << i << endl;
 }
 void f()
 {
     i++;
     g();
 }
int main()
{
    cout << i << endl;
    f();
    cout << i << endl;
}