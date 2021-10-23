#include <bits/stdc++.h>
using namespace std;
#include "Node.cpp"
#include "Input.cpp"

int length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        ++count;
        temp = temp->next;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeInput_better();
        int len = length(head);
        cout << len << endl;
    }
    // print(head);
}
