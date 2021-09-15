#include <bits/stdc++.h>

using namespace std;

//Pointers and Functions
void print(int *p)
{
    cout << *p << endl; // prints the value 10
}
void increament(int *p)
{
    p = p + 1; // in this a copy of the original pointer is made and the value of the copy pointer is changed
}
void Increament(int *p)
{
    *p = *p + 1; // here the value of address is changed i.e now the new value of i is 11
}

//Pointers , Array and Function
int sum(int a1[], int size) // here a[] is passed as a pointer i.e here a[] == *a
{
    int ans =0;
    for(int i=0;i<10 ;i++)
    {
        ans += a1[i]; //a1 is passed as a pointer but is treated as a array only
    }
    cout << sizeof(a1) << endl; // here the output will bes 8 i.e the size of pointer
    return ans;
}

int main()
{
    //Characters and Pointers
    int a[] = {1, 2, 3};
    char b[] = "abc";
    cout << a << endl; // prints the address of a
    cout << b << endl; //prints abc
    char *c = &b[0];
    cout << c << endl; //it will neither print the address of b[0] nor the value of b[0]
                       // output will be abc
    char c1 = 'a';
    char *pc = &c1;
    cout << c1 << endl; //prints the character a
    cout << pc << endl; // prints the character a along with some garbage value e.g a?bh/? till \0 if found

    char str[] = "abcde"; // in this a copy of a string abcde if formed and is stored in str
    char *pstr = "abcde"; // in the pointer is pointing to the string abcde (i.e to a original string not to a copy)
    // so here str[] is safer than *pstr bacause if any changes made to pointer can cause error

    //Pointers and Functions
    int i = 10;
    int *p = &i;
    print(p);
    cout << p << endl; //the address of i is printed
    increament(p);
    cout << p << endl; // since the was made on the copy pointer so here the initial address of i is printed

    cout << *p << endl; // initial value of the address of p i.e i is printed
    Increament(p);
    cout << *p << endl; // new value of the address of p is printed i.e 11

    //Pointers , Array and Function
    int a1[10];
    cout << sizeof(a1) << endl; //here the output will be 40 i.e the size of array
    cout << sum(a1, 10) << endl;
    cout << sum(a1+3, 7) << endl; //here we can also pass the part of an array

    //Double Pointers
    i=10;
    int **p1 = &p;
    cout << p1 << endl;
    cout << &p << endl; //these both statement will print the address of p

    cout << &i << endl;
    cout << p << endl;
    cout << *p1 << endl; // these three statements will print the address of i

    cout << i << endl;
    cout << *p << endl; 
    cout << **p1 << endl; // these three will print the value of i i.e 10
}


//http://www.allindiaexams.in/engineering/cse/c-p-p-multiple-choice-questions-answers/cpp-pointers/4