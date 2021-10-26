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

Node *append(Node *head, int n)
{
    Node *temp = head;
    Node *p = head;
    Node *ptr;
    int l = length(head);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    int i = l - n;
    int j = 0;
    while (j < i)
    {
        temp->next = p;
        temp = temp->next;
        p = p->next;
        j++;
        head = head->next;
    }
    temp->next = NULL;
    return head;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeInput_better();
        int n;
        cin >> n;
        Node *temp = append(head, n);
        print(temp);
    }
}