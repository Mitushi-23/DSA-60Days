#include <bits/stdc++.h>
#include <stack>
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
        this->next = NULL;
    }
};

template <typename T>
class Stack
{
    Node<T> *head;
    int size;

public:
    Stack()
    {
        head = NULL;
        size = 0;
    }

    void push(T element)
    {
        Node<T> *newNode = new Node(element);
        newNode->next = head;
        head = newNode;
        size++;
    }

    int Size()
    {
        return size;
    }

    bool isEmpty()
    {
        if (head == NULL)
            return true;
        return false;
    }

    T pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty ";
            return 0;
        }
        T ele = head->data;
        head = head->next;
        size--;
        return ele;
    }

    T top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty";
            return 0;
        }
        T ele = head->data;
        return ele;
    }
};

int main()
{
    Stack<int> s;
    int queries;
    cin >> queries;
    while (queries--)
    {
        int q;
        cin >> q;
        if (q == 1)
        {
            int ele;
            cin >> ele;
            s.push(ele);
        }
        else if (q == 2)
            cout << s.pop() << endl;
        if (q == 3)
            cout << s.top() << endl;
        else if (q == 4)
            cout << s.Size() << endl;
        else if (q == 5)
        {
            if (s.isEmpty())
                cout << "true" << endl;
            else
                cout << "false" << endl;
        }
    }
    /*
    Inbuilt Stack function
    stack <int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top() << endl;
    cout << s1.size() << endl;
    cout << s1.empty() << endl;
    **/
}