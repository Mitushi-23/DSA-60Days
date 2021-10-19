#include <bits/stdc++.h>
#include "Time.cpp"

using namespace std;

int main()
{
    Time t1;
    t1.setHour(3);
    t1.setMinutes(34);
    t1.setSeconds(54);

    Time t2;
    t2.setHour(2);
    t2.setMinutes(24);
    t2.setSeconds(35);

    Time t3;
     t3 = t1.add(t2);

     t1.print();
     t2.print();
     t3.print();
     Time t4;
     t4 = t2.subtract(t1);
     t4.print();
}