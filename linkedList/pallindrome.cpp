#include <bits/stdc++.h>
#include "Node.cpp"
#include "Input.cpp"

using namespace std;

Node *reverse(Node *head)
{
    Node *current = head;
    Node *next = NULL;
    Node *prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

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

bool pallindrome(Node* head, Node* prev)
{
   
   
       int count=0;
       while(head!=NULL)
       {
           if(head->data != prev->data)
           return false;
           head = head->next;
           prev=prev->next;
       }
   
   return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeInput_better();
        // Node *temp = takeInput_better();
        Node* prev = reverse(head);
        if(pallindrome(head, prev))
        cout << "true" << endl;
        else
        cout << "false" << endl;
    }
}