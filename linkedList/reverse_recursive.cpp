#include <bits/stdc++.h>
#include "Node.cpp"
#include "Input.cpp"

using namespace std;

Node *reverse(Node *head, Node *prev)
{
    Node *current = head;
    Node *next = NULL;

    if (current == NULL)
    {
        return prev;
    }
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
    return reverse(current, prev);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *prev = NULL;
        Node *head = takeInput_better();
        Node *temp = reverse(head, prev);
        print(temp);
    }
}