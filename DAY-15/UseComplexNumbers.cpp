#include <bits/stdc++.h>
#include "ComplexNumbers.cpp"
using namespace std;

int main()
{
    int x1, y1;
    cin >> x1 >> y1;
    int x2, y2;
    cin >> x2 >> y2;
    ComplexNumbers c1(x1, y1);
    ComplexNumbers c2(x2, y2);

    cout << "Enter your choice" << endl;
    int choice;
    cin >> choice;
    if (choice == 1)
        c1.plus(c2);
    else if (choice == 2)
        c1.multiply(c2);
    else
        return 0;
    c1.print();
}