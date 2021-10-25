#include <bits/stdc++.h>
#include "Node.cpp"
#include "Input.cpp"

using namespace std;

int Input_recursive(Node* head , int count)
{
    Node* temp = head;
    if(temp==NULL)
    {
        return count;
    }
    ++count;
    temp=temp->next;
    return Input_recursive(temp , count);
}

int main()
{
    int count=0;
    Node* head = takeInput_better();
    cout << Input_recursive(head,count) << endl;
}