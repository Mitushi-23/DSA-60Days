#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *takeInput()
{
    Node *head = NULL;
    Node *tail = NULL;
    int data;
    cin >> data;
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *ptr = takeInput();
        Node *temp = ptr;
        Node* head = temp;
        int i, j;
        cin >> i >> j;
        int count = 0;
        Node *node_i = NULL;
        Node *node_j = NULL;
        while (ptr != NULL)
        {
            if (count == i)
            {
                Node *newNode = new Node(ptr->data);
                node_i = newNode;
                ptr = ptr->next;
                count++;
            }
            if (count == j)
            {
                Node *newNode = new Node(ptr->data);
                node_j = newNode;
                ptr = ptr->next;
                count++;
            }
            ptr = ptr->next;
            count++;
        }
        count =0;
        while(temp!=NULL)
        {
            if(count== i-1)
            {
                node_j->next = temp->next->next;
                temp->next = node_j;
                temp = temp->next;
                ++count;
            }
            if(count == j-1)
            {
                node_i->next = temp->next->next;
                temp ->next = node_i;
                temp = temp->next;
                ++count;
            }
            temp= temp->next;
            ++count;
        }
        print(head);
    }
}