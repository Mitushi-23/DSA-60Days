#include <bits/stdc++.h>

using namespace std;

int main()
{
    /* Constant int
     int const i=10; <=> const int i=10;*/
    int const i = 10; // here the value of i is now fixed and cannot be changed

    /*
    THIS IS WRONG
    const int i;
    i=10;
    */

    // Constant referance from a non const int
    int j = 12;
    const int &k = j; // here the path through k is constant. Therefore we cannot change the value of k. so, k++ will give error.
    // If we change the value of j the value of k will also be changed as it is passed by referance as studied earlier also
    j++;
    cout << k << endl;

    int const j2 = 10; /* Here we cannot change the value of j2 as well as of k2*/
    int const &k2 = j2;

    // Referance from a const int
    const int j3=10;
    //int &k3 = j3;//We cannot do this as j3 is constant so it will not give its path to k3
}