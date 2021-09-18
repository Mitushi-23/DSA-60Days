#include <bits/stdc++.h>

using namespace std;
/* 
We use const variables in function, if we don't want to change the value or something.
In this if the variable is constant then the pointer should also be constant 
  If variable is not constant then pointer can also be constant
*/
int main()
{
    int const i=10;
    int const *p = &i;

    int j=20;
    int const *pj = &j; // here the path  of pointer is constant
    cout << *pj << endl;
    j++;
    cout << *pj << endl;
    int i1=8;
    int *const p3 = &i1; //here the pointer is constant
    (*p3)++;
    //p3 =&i1; we cannot do this
    int j1=10;
    int const * const p4 = &j1;
   /* *p4 ++ ;
    p4=&j1; 
    these both statements will give error as here both pointer and its path is constant.
    */
}