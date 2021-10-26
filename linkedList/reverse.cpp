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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeInput_better();
        Node *temp = reverse(head);
        print(temp);
    }
}