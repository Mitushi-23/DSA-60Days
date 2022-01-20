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
        Node *head = NULL;
        Node *temp = NULL;
        int M, N;
        cin >> M >> N;
        while (ptr != NULL)
        {
            int m =M ;
            int n=N;
            while ((m--) && ptr!=NULL)
            {
                Node* newNode = new Node(ptr->data);
                if (temp == NULL)
                {
                    temp = newNode;
                    head = newNode;
                    ptr = ptr->next;
                }
                else
                {
                    temp->next=newNode;
                    temp = temp->next;
                    ptr = ptr->next;
                }
            }
            while((n--) && ptr!=NULL )
            {
                ptr = ptr->next;
            }
        }
        print(head);
    }
}