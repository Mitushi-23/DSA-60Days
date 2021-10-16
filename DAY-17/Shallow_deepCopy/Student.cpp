#include <bits/stdc++.h>

using namespace std;

class Student
{
    int age;

public:
    char *name;
    Student(int age, char *name)
    {
        this->age = age;

        //Shallow Copy
        // this->name = name;  -> in this all the pointers of s1 s2.. are pointing to only one array. So any changes made for s2 will reflect for s1 also.
        //                        Therefore, do not do shallow copy.

        // Deep Copy -> In this a copy of an array is made
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    //Copy Constructor -> // In built copy constructor is a shallow copy constructor
    Student(Student const &s)
    {
        this->age = s.age;

        // this->name = name -> Shallow copy

        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }

    void display()
    {
        cout << name << " " << age << endl;
    }
};