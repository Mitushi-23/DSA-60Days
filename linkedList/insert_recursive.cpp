#include <bits/stdc++.h>
#include "Node.cpp"
#include "Input.cpp"

using namespace std;

Node *insert_recursive(Node *head, int i, int data, Node *temp)
{
    Node *ptr = new Node(data);
    if (i == 0)
    {
        ptr->next = head;
        head = ptr;
        return head;
    }
    if (i == 1 || temp == NULL)
    {
        if (temp != NULL)
        {
            ptr->next = temp->next;
            temp->next = ptr;
        }
        return head;
    }
    temp = temp->next;
    i--;
    return insert_recursive(head, i, data, temp);
}

int main()
{
    Node *head = takeInput_better();
    Node *temp = head;
    int i, data;
    cin >> i;
    cin >> data;
    Node *ptr = insert_recursive(head, i, data, temp);
    print(ptr);
}
