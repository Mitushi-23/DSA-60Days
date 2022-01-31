#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Node
{
public:
    T data;
    Node<T> *next;

    Node(T data)
    {
        this->data = data;
        this->next = next;
    }
};

template <typename T>
class Queue
{
    Node<T> *head;
    Node<T> *rear;
    int size;
    int front;

public:
    Queue()
    {
        head = NULL;
        rear = NULL;
        size = 0;
        front = -1;
    }

    void enqueue(T element)
    {
        Node<T> *newNode = new Node(element);
        if (head == NULL)
        {
            front = 0;
            head = newNode;
            rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = rear->next;
        }
        size++;
    }

    bool isEmpty()
    {
        if (size == 0)
            return true;
        return false;
    }

    T dequeue()
    {
        if (isEmpty())
        {
            // cout << "Queue is empty" << endl;
            return -1;
        }
        T ele = head->data;
        head = head->next;
        front++;
        size--;
        return ele;
    }

    T Front()
    {
        if (isEmpty())
        {
            // cout << "Queue is empty" << endl;
            return -1;
        }
        T ele = head->data;
        return ele;
    }

    int getSize()
    {
        return size;
    }
};

int main()
{
    Queue<int> q;
    int queries;
    cin >> queries;
    while(queries--)
    {
        int query;
        cin >> query;
        if(query==1)
        {
            int ele;
            cin >> ele;
            q.enqueue(ele);
        }
        else
        if(query==2)
        {
            cout << q.dequeue() << endl;
        }
        else
        if(query==3)
        {
            cout << q.Front() << endl;
        }
        else
        if(query==4)
        {
            cout << q.getSize() << endl;
        }
        else
        if(query == 5)
        {
            if(q.isEmpty())
            cout << "true" << endl;
            else
            cout << "false" << endl;
        }
    }
}