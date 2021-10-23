#include <bits/stdc++.h>

using namespace std;

class DynamicArray
{
    int *data;
    int nextData;
    int capacity;

public:
    DynamicArray()
    {
        data = new int[5];
        nextData = 0;
        capacity = 5;
    }

    DynamicArray(DynamicArray const &d)
    {
        //Shallow Copy
        // this->data = d.data;

        //Deep Copy
        this->data = new int[d.capacity];
        for(int i=0;i<d.nextData;i++)
        {
            this->data[i] = d.data[i];
        }
        this->nextData = d.nextData;
        this->capacity = d.capacity;
    }

    void operator=(DynamicArray const &d)
    {
        //Shallow Copy
        // this->data = d.data;

        //Deep Copy
        this->data = new int[d.capacity];
        for(int i=0;i<d.nextData;i++)
        {
            this->data[i] = d.data[i];
        }
        this->nextData = d.nextData;
        this->capacity = d.capacity;
    }

    void addElement(int element)
    {
        if (nextData == capacity)
        {
            int *newArray = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newArray[i] = data[i];
            }
            delete[] data;
            data = newArray;
            capacity *= 2;
        }
        else
        {
            data[nextData] = element;
            nextData++;
        }
    }

    void addElement(int element, int i)
    {
        if (i == nextData)
        {
            addElement(element);
        }
        if (i < nextData)
        {
            data[i] = element;
        }
        else
            return;
    }

    void print()
    {
        for (int i = 0; i < nextData; i++)
            cout << data[i] << " ";
        cout << endl;
    }

    int getElement(int i)
    {
        if (i < nextData)
        {
            return data[i];
        }
        else
            return -1;
    }
};