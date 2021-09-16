#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 65;
    char c = i;
    cout << c << endl; //implicit typeCasting

    int *p = &i;
    //char *pc = p; //error
    char *pc = (char *)p; //explicit typeCasting

    cout << p << endl;  //it prints the address of i
    cout << pc << endl; // it prints all the characters till it finds the null character

    cout << *p << endl;  //prints the value of i
    cout << *pc << endl; // prints the typecasted value of i
    //rest three prints null
    cout << *(pc + 1) << endl;
    cout << *(pc + 2) << endl;
    cout << *(pc + 3) << endl;
    //*pc is of char type therefore it will take only one bite. Thus on printing *pc A is printed instaed of null as it takes in input in reverse order i.e |65|0|0|0|
}