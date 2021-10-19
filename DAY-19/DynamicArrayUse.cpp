#include <bits/stdc++.h>
#include "DynamicArray.cpp"
using namespace std;
 int main()
 {
     DynamicArray d1;
     d1.addElement(10);
     d1.addElement(20);
     d1.addElement(30);
     d1.addElement(40);
     d1.addElement(50);
     d1.addElement(60);
     d1.addElement(70);
     d1.addElement(80);

     d1.print();
     d1.addElement(80,3);
     d1.addElement(10,9);
     d1.print();

     cout << d1.getElement(3) << endl;

     DynamicArray d2(d1);
     DynamicArray d3;
     d3=d1;
     d1.addElement(45,2);
     d1.print();
     d2.print(); // here the array d2 also changes on changing d1. -> Shallow Copy to avoid this deep copy is done. 
     d3.print(); // here the array d3 also changes on changing d1. -> Shallow Copy to avoid this deep copy is done.
 }