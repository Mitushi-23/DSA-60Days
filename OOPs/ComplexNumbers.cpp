#include <bits/stdc++.h>

using namespace std;

class ComplexNumbers
{

private:
    int real;
    int imaginary;

public:
    ComplexNumbers(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void print()
    {
        cout << real << " " << imaginary << "i" << endl;
    }

    void plus(ComplexNumbers c2)
    {
        real = real + c2.real;
        imaginary = imaginary + c2.imaginary;
    }

    void multiply(ComplexNumbers c2)
    {
        real = real * c2.real - (imaginary * c2.imaginary);
        imaginary = real * c2.imaginary + imaginary * c2.real;
    }
};