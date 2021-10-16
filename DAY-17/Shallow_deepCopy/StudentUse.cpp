#include <bits/stdc++.h>
#include "Student.cpp"

using namespace std;

int main()
{
    char name[] = "abcd";
    Student s1(20, name);
    s1.display();

    name[3] = 'e';
    Student s2(24, name);
    s2.display();
    s1.display();
    name[2] = 'f';
    Student s3(28, name);
    s3.display();
    Student s4(s1);
    s4.name[0] = 'w';
    s1.display();
    s4.display();
}

