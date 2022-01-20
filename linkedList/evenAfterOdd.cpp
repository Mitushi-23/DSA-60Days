#include <bits/stdc++.h>
#include "Node.cpp"
#include "Input.cpp"

using namespace std;

Node *evenAfterNode(Node *head)
{
    Node *temp = head;
    Node *even = NULL;
    Node *odd = NULL;
    Node *e = even;
    Node *o = odd;
    // if (temp->data % 2 != 0)
    // {
    //     odd = temp;
    //     o = odd;
    //     temp = temp->next;
    // }

    while (temp != NULL)
    {
        if (temp->data % 2 != 0)
        {
            odd = temp;
            temp = temp->next;
            odd=odd->next;
        }
        else
            temp = temp->next;
    }
    temp = head;
    
    while (temp != NULL)
    {
        if (temp->data % 2 == 0)
        {
            even = temp;
            temp = temp->next;
            even = even->next;
        }
        else
            temp = temp->next;
    }
    odd->next = e;
    return e;
}

int main()
{
    Node *head = takeInput_better();
    Node *newNode = evenAfterNode(head);
    print(newNode);
}
