#include <bits/stdc++.h>
#include "template.cpp"
using namespace std;

int main()
{
    /*
    Both x and y are of same data type

    Pair <int> p1;
    Pair <double> p2;

    p1.setX(10);
    p1.setY(20);

    p2.setX(34.23);
    p2.setY(45.54);

    cout << p1.getX() << " " << p1.getY() << endl;
    cout << p2.getX() << " " << p2.getY() << endl;
    **/

   // Both x and y are of different data type

   Pair<int , double> p1;
   p1.setX(10);
   p1.setY(90.54);

   cout << p1.getX() << "  " << p1.getY() << endl; 

   // Making triplet using pair class

   Pair<Pair<int,int> ,int> p2;

   Pair <int, int> p4;
   p4.setX(10);
   p4.setY(20);
   p2.setX(p4);

   p2.setY(30);

   cout << p2.getX().getX() << "  " << p2.getX().getY() << "  " << p2.getY() << endl;
}
