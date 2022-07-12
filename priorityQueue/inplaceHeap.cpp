#include <vector>
#include <bits/stdc++.h>
using namespace std;

// bool isEmpty()
// {
//     return v.size() == 0;
// }

// int getSize()
// {
//     return v.size();
// }

// int getMin()
// {
//     if (isEmpty())
//     {
//         return 0;
//     }
//     return v[0];
// }

void insert(vector<int> v, int i)
{
    // v.push_back(element);
    int childIndex = i;
    while (childIndex > 0)
    {
        int parentIndex = (childIndex - 1) / 2;
        if (v[childIndex] < v[parentIndex])
        {
            int temp = v[childIndex];
            v[childIndex] = v[parentIndex];
            v[parentIndex] = temp;
        }
        else
        {
            break;
        }
        childIndex = parentIndex;
    }
}

void deleteMin(vector<int> v, int i)
{

    int ans = v[0];
    v[0] = v[v.size() - i - 1];
    // v.pop_back();

    int parentIndex = 0;
    int leftChildIndex = 2 * parentIndex + 1;
    int rightChildIndex = 2 * parentIndex + 2;

    while (leftChildIndex < v.size() - i)
    {
        int minIndex = parentIndex;
        if (v[leftChildIndex] < v[minIndex])
        {
            minIndex = leftChildIndex;
        }
        if (rightChildIndex < v.size() && v[rightChildIndex] < v[minIndex])
        {
            minIndex = rightChildIndex;
        }
        if (minIndex == parentIndex)
        {
            break;
        }
        int temp = v[minIndex];
        v[minIndex] = v[parentIndex];
        v[parentIndex] = temp;
        parentIndex = minIndex;
        leftChildIndex = 2 * parentIndex + 1;
        rightChildIndex = 2 * parentIndex + 2;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    for (int i = 1; i < n; i++)
    {
        int childIndex = i;
        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;
            if (v[childIndex] < v[parentIndex])
            {
                int temp = v[childIndex];
                v[childIndex] = v[parentIndex];
                v[parentIndex] = temp;
            }
            else
            {
                break;
            }
            childIndex = parentIndex;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
       int temp = v[n-1-i];
       v[n-1-i]=v[0];
        v[0] = temp;

        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;

        while (leftChildIndex < v.size() - i-1)
        {
            int minIndex = parentIndex;
            if (v[leftChildIndex] < v[minIndex])
            {
                minIndex = leftChildIndex;
            }
            if (rightChildIndex < v.size() - 1-i && v[rightChildIndex] < v[minIndex])
            {
                minIndex = rightChildIndex;
            }
            if (minIndex == parentIndex)
            {
                break;
            }
            int temp = v[minIndex];
            v[minIndex] = v[parentIndex];
            v[parentIndex] = temp;
            parentIndex = minIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}