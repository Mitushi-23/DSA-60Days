#include <bits/stdc++.h>
#include "Node.cpp"
#include "Input.cpp"

using namespace std;

Node *duplicate(Node *head)
{
    Node *temp = head;
    Node *p = head->next;
    Node *q = head;
    while (temp->data == p->data && p != NULL)
    {
        head = head->next;
        temp = head;
        p = head->next;
        q = head;
        if (p == NULL)
            return head;
    }

    temp = temp->next;
    p = p->next;

    while (p != NULL)
    {
        if (temp->data == p->data)
        {
            Node *ptr = temp;
            q->next = q->next->next;
            temp = temp->next;
            p = p->next;
            ptr->next = NULL;
            delete ptr;
        }
        else
        {
            q = q->next;
            p = p->next;
            temp = temp->next;
        }
    }
    return head;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeInput_better();
        Node *temp = duplicate(head);
        print(temp);
    }
}