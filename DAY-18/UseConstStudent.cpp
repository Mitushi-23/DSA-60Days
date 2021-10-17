#include <bits/stdc++.h>
#include "ConstStudent.cpp"
using namespace std;

int main() {
    Student s1(101);
    s1.age = 20;

    Student const s2 = s1;
    Student s3, s4, s6, s5;
    cout << s2.getRollNumber() << endl; // Const variable can call a constant function only
    cout << Student :: gettotalStudents() << endl;
}