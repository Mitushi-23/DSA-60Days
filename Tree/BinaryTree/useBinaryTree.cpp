#include <bits/stdc++.h>
#include <queue>
#include "BinaryTreeNode.h"
using namespace std;

void printTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    if (root->left != NULL)
    {
        cout << "L" << root->left->data << " ";
    }
    if (root->right != NULL)
    {
        cout << "R" << root->right->data << " ";
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}

void PrintLevelWise(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (q.size() != 0)
    {
        BinaryTreeNode<int> *front = q.front();
        q.pop();
        cout << front->data << ":";
        if (front->left != NULL)
        {
            cout << "L:"<< front->left->data;
            q.push(front->left);
        }
       if(front->left == NULL)
       {
           cout << "L:-1" ;
       }
        if (front->right != NULL)
        {
            cout << ",R:" << front->right->data;
            q.push(front->right);
        }
        if(front->right ==NULL)
        {
            cout << ",R:-1";
        }
        cout << endl;
    }
}

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

int countNodes(BinaryTreeNode<int>*root)
{
    if(root==NULL)
    {
        return 0; 
    }
    return 1+ countNodes(root->left) + countNodes(root->right);
}

BinaryTreeNode<int> *takeinput()
{
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftChild = takeinput();
    BinaryTreeNode<int> *rightChild = takeinput();
    root->left = leftChild;
    root->right = rightChild;
    return root;
}

bool nodePresent(BinaryTreeNode<int>*root, int ele)
{
    // cout << root->data << " ";
    if(root->data == ele)
    {
        return true; 
    }
    if(root == NULL)
    {
        return false;
    }
     if(root->left !=NULL)
        {
            if(nodePresent(root->left,ele))
            return true;
        }
    if(root->right !=NULL)
    {
        if (nodePresent(root->right,ele))
        return true;
    } 
     return false;
}

// [4,-7,-3,-1,-1,-9,-3,9,-7,-4,-1,6,-1,-6,-6,-1,-1,0,6,5,-1,9,-1,-1,1,-4,-1,-1,-1,-2,-1,-1,-1,-1,-1,-1,-1,-1]

int height (BinaryTreeNode<int>*root)
{
    if(root == NULL)
    return 0;

    return max(1+height(root->left),1+height(root->right));
}

int diameterOfBinaryTree(BinaryTreeNode<int>* root) {
        if(root == nullptr)
        {
            return 0;
        }
        BinaryTreeNode<int>* front = root;
        cout <<  height(root->left) << " " << height(root->right) <<endl;
        return height(root->left) + height(front->right);
    }
void Mirror_Binary_Tree(BinaryTreeNode<int>*root)
{
    if(root==NULL)
    {
        return;
    }
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    int c=1;
    int d;
    while(q.size()!=0)
    {
       d=c;
       c=0;
       while(d--)
       {
        BinaryTreeNode<int>*front = q.front();
        q.pop();
                cout << front->data << " ";
            if(front->right!=NULL)
            {
                q.push(front->right);
                ++c;
            }
            if(front->left !=NULL)
            {
                q.push(front->left);
                ++c;
            }
       }
       cout << endl;
    }
}

void preOrder(BinaryTreeNode<int>*root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(BinaryTreeNode<int>*root)
{
    if(root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void inOrder(BinaryTreeNode<int>*root)
{
    if(root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void TreeFromIn_Pre(int in[], int pre[])
{
    int rootdata = in[0];
    BinaryTreeNode<int>* root = new BinaryTreeNode(rootdata);
    
}

int main()
{
    /*
    BinaryTreeNode<int>*root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int>*node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int>*node2 = new BinaryTreeNode<int>(3);

    root->left = node1;
    root->right = node2;
    **/
    BinaryTreeNode<int> *root = takeInputLevelWise();
    int ele;
    cout << "Enter element" << endl;
    cin >> ele;
    PrintLevelWise(root);
    cout << countNodes(root) << endl;
    if(nodePresent(root,ele))
    cout << "true" << endl;
    else
    cout << "false" << endl;

    cout << height(root) << endl;
    Mirror_Binary_Tree(root);
    cout << diameterOfBinaryTree(root) << endl;
    preOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    delete root;
}

// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1