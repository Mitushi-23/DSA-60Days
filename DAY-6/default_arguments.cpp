/* 
Default arguments-> We can set a default value to a function so that if no value is passed then the function takes the default value by itself.
Always give default value from left to right i.e first give the default value to the leftmost argument.
*/
#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b, int c, int d=0) // this method is correct
{
    return a+b+c+d;
}

int add(int a, int b=0, int c,int d) /*in this on passing 3 arguments the compiler may get confused and may assign the value to a,b and c. Due to this error may occur as d will have no value.
So to resolve it keep b at leftmost side.
*/

{
    return a+b+c+d;
}
    int main()
{
    cout << sum(2,5,7) << endl;
}