#include <bits/stdc++.h>
#include "Node.cpp"
#include "Input.cpp"

Node *merge(Node *list1, Node *list2)
{
    Node *h1 = list1;
    Node *h2 = list2;
    Node *hf = NULL;
    Node *ht = NULL;
    if (h1->data < h2->data)
    {
        hf = h1;
        ht = h1;
        h1 = h1->next;
    }
    else
    {
        hf = h2;
        ht = h2;
        h2 = h2->next;
    }
    while (1)
    {
        if (h1->data < h2->data)
        {
            ht->next = h1;
            ht=ht->next;
            h1 = h1->next;
            if (h1 == NULL)
            {
                ht->next = h2;
                return hf;
            }
        }
        else
        {
            ht->next = h2;
            ht=ht->next;
            h2 = h2->next;
            if (h2 == NULL)
            {
                ht->next = h1;
                return hf;
            }
        }
    }
}

int main()
{
    Node *list1 = takeInput_better();
    Node *list2 = takeInput_better();

    Node *final = merge(list1, list2);
    print(final);
}