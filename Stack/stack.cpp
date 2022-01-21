#include <bits/stdc++.h>

using namespace std;

class Stack
{
    int *data;
    int next;
    int capacity;

public:
    Stack()
    {
        data = new int[5];
        capacity = 5;
        next = 0;
    }

    int Size()
    {
        return next;
    }

    void push(int element)
    {
        if (next == capacity)
        {
            //Dynamic Array
            int *newData = new int [2*capacity];
            for(int i=0;i<capacity ;i++)
            {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete [] data;
            data = newData;
        }
        
        
            data[next] = element;
            next++;
        
    }

    bool isEmpty()
    {
        if (next == 0)
            return true;
        return false;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        next--;
        return data[next];
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        return data[next];
    }
};

int main()
{
    Stack s;
    cout << s.top() << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.Size() << endl;
    cout << s.isEmpty() << endl;
}