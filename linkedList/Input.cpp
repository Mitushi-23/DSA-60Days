#include <bits/stdc++.h>
// #include "Node.cpp"
using namespace std;

Node *takeInput()
{
    cout << "Enter the elements" << endl;
    int data;
    cin >> data;
    Node *head = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> data;
    }
    return head;
}

Node *takeInput_better()
{
    cout << "Enter the elements" << endl;
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            // Node *temp = head;
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// int main()
// {
//     cout << "Enter elements" << endl;
//     Node *head = takeInput();

//     cout << "Enter elements" << endl;
//     Node *ptr = takeInput_better();
//     print(head);
//     print(ptr);
// }
