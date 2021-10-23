#include <bits/stdc++.h>
#include "Node.cpp"
#include "Input.cpp"

using namespace std;

Node *insert(Node *head, int i, int data)
{
    Node *ptr = new Node(data);
    Node *temp = head;
    if (i == 0)
    {
        ptr->next = temp;
        head = ptr;
        return head;
    }
    int count = 0;
    while (count < i - 1 && temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        ptr->next = temp->next;
        temp->next = ptr;
    }
    return head;
}

int main()
{
    Node *head = takeInput_better();
    cout << "Enter the element and the position" << endl;
    int data, i;
    cin >> data;
    cin >> i;
    Node *ptr = insert(head, i, data);
    print(ptr);
}