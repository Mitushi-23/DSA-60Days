#include <bits/stdc++.h>
using namespace std;
#include "String.cpp"

 int main()
 {
     String s1("hello");
     String s2(s1);
    s1.display();
    s1.change(0,'w');
    s1.display();
    s2.display();
    String s3(s1);
    cout << (s1==s2) << endl;
    cout << (s1==s3) << endl;
    String s4= s1+s2;
    s4.display();
    String s5 = -s1;
    s5.display();
    s1.display();
 }