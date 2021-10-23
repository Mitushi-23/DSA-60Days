#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    const int rollNumber;
    int age;

    int &x;

    Student(int r, int a) : rollNumber(r), age(a), x(this->age) // Initialization List
    {
    }
    int getRollNumber() const
    {
        return rollNumber;
    }
    int getAge() const{
        return age;
    }

    
};

