#include <bits/stdc++.h>
#include "Node.cpp"
#include "Input.cpp"

using namespace std;

int elementAtI(Node *head, int i)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        if (count == i)
        {
            return temp->data;
        }
        ++count;
        temp = temp->next;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeInput_better();
        int i;
        cin >> i;
        cout << elementAtI(head, i) << endl;
    }
}