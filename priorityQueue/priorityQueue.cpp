#include <bits/stdc++.h>
#include "./minPriorityQueue.h"
#include "./maxPriorityQueue.h"
using namespace std;

int main()
{
    PriorityQueueMin ob;
    ob.insert(23);
    ob.insert(18);
    ob.insert(12);
    ob.insert(32);
    ob.insert(2);
    ob.insert(9);

    cout << ob.getMin() << endl;
    while (!ob.isEmpty())
    {
        cout << ob.deleteMin() << " ";
    }
    cout << endl;

    PriorityQueueMax p;
    p.insert(23);
    p.insert(18);
    p.insert(12);
    p.insert(32);
    p.insert(2);
    p.insert(9);

    cout << p.getMax() << endl;
    while (!p.isEmpty())
    {
        cout << p.deleteMax() << " ";
    }
    cout << endl;
}