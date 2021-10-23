#include <bits/stdc++.h>

using namespace std;

class Student
{
    int rollNumber;
    static int totalStudents;

public:
    int age;

    Student(int r)
    {
        rollNumber = r;
        totalStudents++;
    }

    int getRollNumber() const
    {
        return rollNumber;
    }

    static int gettotalStudents()
    {
        return totalStudents;
    }

    Student()
    {
        totalStudents++;
    }
};
int Student ::totalStudents = 0; // Initialzing static data members

// Static members can only be called by static functions and vise versa
