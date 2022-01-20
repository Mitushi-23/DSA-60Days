#include <bits/stdc++.h>
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
void merge(Node *list1, Node *list2)
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
            ht = ht->next;
            h1 = h1->next;
            if (h1 == NULL)
            {
                ht->next = h2;
                // return hf;
                print(hf);
            }
        }
        else
        {
            ht->next = h2;
            ht = ht->next;
            h2 = h2->next;
            if (h2 == NULL)
            {
                ht->next = h1;
                print(hf);
                // return hf;
            }
        }
    }
}

// Node* mergeSort(Node *head)
// {
//     int len = length(head);
//     Node *temp = head;
//     Node *list1 = NULL;
//     Node *list2 = NULL;
//     int l = len / 2;

//     list1 = head;
//     Node*p1= list1;
//     while (l > 1)
//     {
//         head = head->next;
//         list1->next = head;
//         list1 = list1->next;
//         l--;
//     }
//     list1->next=NULL;
//     head = head->next;
//     cout << head->data << endl;
//     list2 = head;
//     Node*p2= list2;
//     while (head != NULL)
//     {
//         head = head->next;
//         list2->next = head;
//         list2 = list2->next;
//     }
//     return mergeSort(p1);
//     return mergeSort(p2);
//     print(p1);
//     print(p2);
//    Node *ptr = merge(p1, p2);
//     return ptr ;
// }

Node* mergeSort(Node *head, int l, int r)
{
    Node *temp = head;
    Node *p1;
    Node *p2;
    if (l < r)
    {
        int mid = (l + r) / 2;
        p1 =mergeSort(temp, l, mid);
        p2 =mergeSort(temp, mid + 1, r);
        merge(p1,p2);
    }
   return 0;
}

int main()
{
    Node *head = takeInput_better();
    int l = 0, r = length(head) - 1;
    mergeSort(head, l, r);
    // print(temp);
}