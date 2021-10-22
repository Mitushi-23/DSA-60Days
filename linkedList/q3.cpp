#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    char c;
    Node *next;

    Node(char c)
    {
        this->c = c;
        next = NULL;
    }
};

int main()
{
    string s = "hello";
    Node *c1 = new Node(s[0]);
    Node *head = c1;
    for (int i = 1; i < s.length(); i++)
    {
        Node *ptr = c1;
        int count = 0;
        for (int j = 0; j < i; j++)
        {

            if (ptr->next->c == s[i] && ptr->next != NULL)
            {
                Node *q = ptr;
                ptr->next = q->next;
                delete q;
                ++count;
            }
            else
            {
                if (ptr->next == NULL)
                {
                    ptr->next->c = s[i];
                }
                else
                    ptr = ptr->next;
                // break;
            }
        }
        // c1 = ptr;
        // if (count == 0)
        // {
        //     Node *c2 = new Node(s[i]);
        //     head->next = c2;
        // }
        // else
        // {
        // }
        // head->next = c2;
        // head=c2;
    }
    while (c1 != NULL)
    {
        cout << c1->c << " ";
        c1 = c1->next;
    }
    cout << endl;
}
