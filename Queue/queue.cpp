#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Queue
{
    T *data;
    int size;
    int next;
    int capacity;
    int first;

public:
    Queue(int s)
    {
        data = new T[s];
        next = 0;
        size = 0;
        first = -1;
        capacity = 5;
    }

    void enqueue(int element)
    {
        /*
        if (size == capacity)
        {
            cout << "Queue is full" << endl;
            return;
        }
        **/

        // Dynamic Queue

        if (size == capacity)
        {
            T *newData = new T[2 * capacity];
            int j = 0;
            for (int i = first; i < capacity; i++)
            {
                newData[j] = data[i];
                j++;
            }
            for (int i = 0; i < first; i++)
            {
                newData[j] = data[i];
                j++;
            }
            delete[] data;
            data = newData;
            first = 0;
            next = capacity;
            capacity = 2 * capacity;
        }

        if (size == 0)
        {
            first = 0;
        }
        data[next] = element;
        next = (next + 1) % capacity;
        size++;
    }

    T front()
    {
        if (first == -1)
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        return data[first];
    }

    bool isEmpty()
    {
        if (size == 0)
            return true;
        return false;
    }

    T dequeue()
    {
        T ele;
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        else
        {
            ele = data[first];
            first = (first + 1) % capacity;
            size--;
        }
        if (size == 0)
        {
            first = -1;
            next = 0;
        }
        return ele;
    }

    int Size()
    {
        return size;
    }
};

int main()
{
    Queue<int> q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);

    cout << q.front() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.front() << endl;
    cout << q.Size() << endl;
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    cout << q.Size() << endl;
    cout << q.front() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.front() << endl;
    cout << q.isEmpty() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.front() << endl;
    q.enqueue(10);
    cout << q.front() << endl;
}