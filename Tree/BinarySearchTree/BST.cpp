#include <bits/stdc++.h>
#include "../BinaryTree/BinaryTreeNode.h"
class BST
{
    BinaryTreeNode<int> *root;

public:
    BST()
    {
        root == NULL;
    }
    ~BST()
    {
        delete root;
    }

private:
    BinaryTreeNode<int> *deleteData(int data, BinaryTreeNode<int> *node)
    {
        if (node == NULL)
        {
            return NULL;
        }
        if (data < node->data)
        {
            node->left = deleteData(data, node->left);
        }
        else if (data > node->data)
        {
            node->right = deleteData(data, node->right);
        }
        else if (node->left == NULL && node->right == NULL)
        {
            delete node;
            return NULL;
        }
        else if (node->left == NULL)
        {
            BinaryTreeNode<int> *temp = node->right;
            node->right = NULL;
            delete node;
            return temp;
        }
        else if (node->right == NULL)
        {
            BinaryTreeNode<int> *temp = node->left;
            node->left = NULL;
            delete node;
            return temp;
        }
        else
        {
            BinaryTreeNode<int> *minNode = node->right;
            while (minNode->left != NULL)
            {
                minNode = minNode->left;
            }
            int rightmin = minNode->data;
            node->data = rightmin;
            node->right = deleteData(rightmin, node->right);
            return node;
        }
    }

public:
    void deleteData(int data)
    {
        root = deleteData(data, root);
    }

    void printTree()
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
                cout << "L:" << front->left->data;
                q.push(front->left);
            }
            if (front->left == NULL)
            {
                cout << "L:-1";
            }
            if (front->right != NULL)
            {
                cout << ",R:" << front->right->data;
                q.push(front->right);
            }
            if (front->right == NULL)
            {
                cout << ",R:-1";
            }
            cout << endl;
        }
    }

private:
    BinaryTreeNode<int> *insertData(int data, BinaryTreeNode<int> *node)
    {
        if (node == NULL)
        {
            BinaryTreeNode<int> *root1 = new BinaryTreeNode(data);
            return root1;
        }
        if (data < node->data)
        {

            node->left = insertData(data, node->left);
        }
        if (data > node->data)
        {

            node->right = insertData(data, node->right);
        }
        return node;
    }

public:
    void insertData(int data)
    {
        this->root = insertData(data, this->root);
    }

private:
    bool hasData(BinaryTreeNode<int> *node, int data)
    {
        if (node == NULL)
            return false;
        if (node->data == data)
        {
            return true;
        }
        else if (data < node->data)
        {
            return hasData(node->left, data);
        }
        else if (data > node->data)
        {
            return hasData(node->right, data);
        }
    }

public:
    bool hasData(int data)
    {
        return hasData(root, data);
    }
};
