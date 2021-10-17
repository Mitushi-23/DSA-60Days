#include <bits/stdc++.h>
#include "Student.cpp"

using namespace std;

int main()
{
    Student s1(100, 23);
    // s1.x = age;
    s1.age = 30;
    cout << s1.rollNumber << " " << s1.age << " " << s1.x << endl;
    Student const s2 = s1;

    cout << s2.getRollNumber() << " " << s2.getAge() << endl;

}