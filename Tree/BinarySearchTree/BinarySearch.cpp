#include <bits/stdc++.h>
#include "../BinaryTree/BinaryTreeNode.h"

using namespace std;

BinaryTreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (q.size() != 0)
    {
        BinaryTreeNode<int> *front = q.front();
        q.pop();
        cout << "Enter the left child data of " << front->data << endl;
        int leftChild;
        cin >> leftChild;
        if (leftChild != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChild);
            front->left = child;
            q.push(child);
        }
        cout << "Enter the right child data of " << front->data << endl;
        int rightChild;
        cin >> rightChild;
        if (rightChild != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChild);
            front->right = child;
            q.push(child);
        }
    }
    return root;
}

bool search(BinaryTreeNode<int>*root, int ele)
{
    if(root == NULL)
    {
        return false;
    }
    if(root->data == ele)
    {
        return true;
    }
    if(root->data > ele)
    {
       return search(root->left, ele);
    }
    else
    if(root->data < ele)
    {
        return search(root->right, ele);
    }
    return false;
}

int main()
{
    BinaryTreeNode<int>* root = takeInputLevelWise();
    int ele;
    cin >> ele;
    if(search(root, ele))
    cout << "true" << endl;
    else
    cout << "false" << endl;
}

// 8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1