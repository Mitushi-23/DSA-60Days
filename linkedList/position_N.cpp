#include <bits/stdc++.h>
#include "Node.cpp"
#include "Input.cpp"

using namespace std;

int position(Node *head, int i, int data)
{
    if (head != NULL)
    {
        if (data == head->data)
        {
            return i;
        }
        head = head->next;
        i++;
        return position(head, i, data);
    }
    else
        {
            return -1;
        }
}

int main()
{
    Node *head = takeInput_better();
    int i = 0;
    int data;

    cin >> data;
    int index = position(head, i, data);
    cout << index << endl;
}
