#include <bits/stdc++.h>
#include "Node.cpp"
#include "Input.cpp"

using namespace std;

Node *delete_recursive(Node *head, int i, Node *temp)
{
    Node *ptr;
    if (i == 0)
    {
        head = head->next;
        return head;
    }
    if (i == 1 || temp == NULL)
    {
        if (temp != NULL)
        {
            ptr = temp->next;
            temp->next = temp->next->next;
            ptr->next = NULL;
            delete ptr;
        }
        return head;
    }
    temp = temp->next;
    i--;
    return delete_recursive(head, i, temp);
}

int main()
{
    Node *head = takeInput_better();
    Node *temp = head;
    int i;
    cin >> i;
    Node *ptr = delete_recursive(head, i, temp);
    print(ptr);
}
