#include <bits/stdc++.h>
#include "Node.cpp"
#include "Input.cpp"

using namespace std;

Node *delete_i(Node* head, int i)
{
    Node* temp =head;
    if(i==0)
    {
        head = head->next;
        return head;
    }
    int count =0;
    while(count <i-1 && temp!=NULL)
    {
        temp = temp->next;
        count++;
    }
    if(temp!=NULL)
    {
        Node *ptr= temp->next;  
        temp->next = temp->next->next;
        ptr->next=NULL;
        delete ptr;
    }
    return head;
}

int main()
{
    Node* head = takeInput_better();
    int i;
    cin >> i;
    Node* p = delete_i(head,i);
    print(p);
}