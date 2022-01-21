#include <bits/stdc++.h>

using namespace std;
template <typename T>

class Stack
{
    T *data;
    int next;
    int capacity;

public:
    Stack()
    {
        data = new T[5];
        capacity = 5;
        next = 0;
    }

    int Size()
    {
        return next;
    }

    void push(T element)
    {
        if (next == capacity)
        {
            //Dynamic Array
            T *newData = new T [2*capacity];
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

    T pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        next--;
        return data[next];
    }

    T top()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        return data[next];
    }
};

int main()
{
    Stack <char> s ;
    cout << s.top() << endl;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105);
    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.Size() << endl;
    cout << s.isEmpty() << endl;
    
}
