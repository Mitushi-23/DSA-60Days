#include <bits/stdc++.h>
using namespace std;

priority_queue <int> pq; 
priority_queue <int, vector<int> , greater<int>> p; 

int main()
{
    pq.push(12);
    pq.push(67);
    pq.push(76);
    pq.push(34);
    pq.push(2);
    pq.push(8);
    pq.push(1);

    cout << "size: " << pq.size() << endl;

    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    p.push(12);
    p.push(67);
    p.push(76);
    p.push(34);
    p.push(2);
    p.push(8);
    p.push(1);

    cout << "size: " << p.size() << endl;

    while(!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }
    cout << endl;
}