#include <bits/stdc++.h>
using namespace std;
#include "Node.cpp"

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    //Ststically
    Node n1(10);
    Node n2(20);
    Node n3(30);
    Node n4(40);
    Node n5(50);
    Node n6(60);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;

    Node *head = &n1;
    print(&n1);
    print(head);

    //Dynamically
    Node *m1 = new Node(1);
    Node *m2 = new Node(2);
    Node *m3 = new Node(3);
    Node *m4 = new Node(4);
    Node *m5 = new Node(5);
    Node *m6 = new Node(6);

    m1->next = m2;
    m2->next = m3;
    m3->next = m4;
    m4->next = m5;
    m5->next = m6;

    print(m1);
    Node *ptr = m1;
    print(ptr);
}