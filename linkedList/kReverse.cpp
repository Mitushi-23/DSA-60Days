#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

Node *takeInput()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *temp = NULL;
    int data;
    cin >> data;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            temp = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
            tail->prev = temp;
            temp = temp->next;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head , int k)
{
    Node *temp = head;
    while (temp != NULL && k--)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *ptr = takeInput();
        Node *head = ptr;
        // print(head);
        int k;
        cin >> k;
            int l = k-1;
        while (ptr != NULL)
        {
            Node* temp = NULL;
            while ((l--) || ptr != NULL)
            {
                Node* newNode = new Node(ptr->data);
                temp = newNode;
                temp = temp->next;
                ptr = ptr->next;
            }
            Node* temp = ptr;
            print(ptr,k);
            l=k;
        }
        cout << endl;
        t--;
    }
}