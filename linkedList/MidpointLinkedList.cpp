#include <bits/stdc++.h>
#include "Node.cpp"
#include "Input.cpp"

using namespace std;

int length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        ++count;
        temp = temp->next;
    }
    return count;
}

int midpoint(Node *head)
{
    Node* temp = head;
    int l= length(head);
    int len;
    if(l%2!=0)
    {
         len = l/2;
    }
    else
    {
        len = l/2 -1;
    }

    while(len>0)
    {
        temp = temp->next;
        len--;
    }
    return temp->data;
}

int main()
{
    Node *head = takeInput_better();
    int data = midpoint(head);
    cout << data << endl;
}
