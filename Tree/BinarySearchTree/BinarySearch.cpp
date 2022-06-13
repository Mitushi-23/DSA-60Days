#include <bits/stdc++.h>
// #include "../BinaryTree/BinaryTreeNode.h"
#include "BST.cpp"
// #include "../linkedList/Node.cpp"

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

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

void printRange(BinaryTreeNode<int> *root, int l, int r)
{
    if (root == NULL)
    {
        return;
    }
    if (root->data >= l && root->data <= r)
    {
        printRange(root->left, l, r);
        cout << root->data << " ";
        printRange(root->right, l, r);
        // cout << root->data << " ";
    }

    if (root->data > l && root->data > r)
    {
        printRange(root->left, l, r);
    }

    if (root->data < l && root->data < r)
    {
        printRange(root->right, l, r);
    }
}

bool search(BinaryTreeNode<int> *root, int ele)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == ele)
    {
        return true;
    }
    if (root->data > ele)
    {
        return search(root->left, ele);
    }
    else if (root->data < ele)
    {
        return search(root->right, ele);
    }
    return false;
}

BinaryTreeNode<int> *constructBST(int arr[], int fi, int li)
{
    if (fi > li)
    {
        return NULL;
    }
    int m = (fi + li) / 2;

    BinaryTreeNode<int> *root = new BinaryTreeNode(arr[m]);

    root->left = constructBST(arr, fi, m - 1);
    root->right = constructBST(arr, m + 1, li);
    return root;
}

Node *sortedLL(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        Node *temp = new Node(root->data);
        return temp;
    }
    Node *temp = new Node(root->data);
    Node *leftans = sortedLL(root->left);
    Node *rightans = sortedLL(root->right);
    if (leftans != NULL)
    {
        Node *t = leftans;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = temp;
    }
    temp->next = rightans;
    if (leftans == NULL)
    {
        return temp;
    }
    return leftans;
}

vector<int> *pathBST(BinaryTreeNode<int> *root, int ele)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == ele)
    {
        vector<int> *temp = new vector<int>();
        temp->push_back(root->data);
        return temp;
    }
    vector<int> *leftans = pathBST(root->left, ele);
    if (leftans != NULL)
    {
        leftans->push_back(root->data);
        return leftans;
        // leftans->data = root->data;
    }
    vector<int> *rightans = pathBST(root->right, ele);
    if (rightans != NULL)
    {
        rightans->push_back(root->data);
        return rightans;
        // leftans->data = root->data;
    }
    return NULL;
}

BinaryTreeNode<int> *createDuplicate(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    BinaryTreeNode<int> *duplicate = new BinaryTreeNode(root->data);

    duplicate->left = createDuplicate(root->left);
    root->left = duplicate;
    root->right = createDuplicate(root->right);
    return root;
}

bool checkSum(BinaryTreeNode<int> *root, int ele)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == ele)
    {
        root->data = INT_MIN;
        return true;
    }
    return checkSum(root->right, ele);
    return checkSum(root->left, ele);
    // return false;
}

void PairSum(BinaryTreeNode<int> *root, int s, BinaryTreeNode<int> *root1)
{
    if (root == NULL)
    {
        return;
    }
    // cout << root->data << endl;
    // cout << root1->data << endl;
    if (root->data != INT_MIN)
    {
        int data1 = root->data;
        int data2 = s - data1;
        if (checkSum(root1, data2))
        {
            cout << data1 << " " << data2 << endl;
        }
    }

    PairSum(root->left, s, root1);
    PairSum(root->right, s, root1);
}

int LCA(BinaryTreeNode<int> *root, int data1, int data2)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == data1 || root->data == data2)
    {
        return root->data;
    }
    int LCAleft = LCA(root->left, data1, data2);
    int LCAright = LCA(root->right, data1, data2);
    if (LCAleft == -1 && LCAright == -1)
    {
        return -1;
    }
    if (LCAleft != -1 && LCAright == -1)
    {
        return LCAleft;
    }
    else if (LCAright != -1 && LCAleft == -1)
    {
        return LCAright;
    }
    if (LCAleft != -1 && LCAright != -1)
    {
        return root->data;
    }
    return -1;
}

int LCABST(BinaryTreeNode<int> *root, int data1, int data2)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == data1 || root->data == data2)
    {
        return root->data;
    }
    if (data1 < root->data && data2 < root->data)
    {
        return LCABST(root->left, data1, data2);
    }
    if (data1 > root->data && data2 > root->data)
    {
        return LCABST(root->right, data1, data2);
    }
    int lcaleft = LCABST(root->left, data1, data2);
    int lcaright = LCABST(root->right, data1, data2);
    if (lcaleft == -1 && lcaright == -1)
    {
        return -1;
    }
    if (lcaleft != -1 && lcaright != -1)
    {
        return root->data;
    }
    return -1;
}

int heightBST(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + max(heightBST(root->left), heightBST(root->right));
}

bool isBST(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->left != NULL)
    {
        if (root->left->data > root->data)
        {
            return false;
        }
    }
    if (root->right != NULL)
    {
        if (root->right->data < root->data)
        {
            return false;
        }
    }
    isBST(root->left);
    isBST(root->right);

    return true;
}
int replacewithSumofGreater(BinaryTreeNode<int> *root, int &sum)
{
    if (root == NULL)
    {
        return sum;
    }
    replacewithSumofGreater(root->right, sum);
    sum = (sum + root->data);
    root->data = sum;
    sum = replacewithSumofGreater(root->left, sum);
    return sum;
}

void replace(BinaryTreeNode<int> *root)
{
    int sum = 0;
    replacewithSumofGreater(root, sum);
    //  PrintLevelWise(root);
}

int largestBSTheight(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return heightBST(root);
    }
    int heightLeft;
    int heightRight;
    // cout << root->data << endl;
    if (isBST(root))
    {
        // cout << root->data << endl;
        return heightBST(root);
    }
    else
    {
        heightLeft = largestBSTheight(root->left);
        heightRight = largestBSTheight(root->right);
    }
    return max(heightLeft, heightRight);
}

int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();
    // BinaryTreeNode<int> *root1 = createDuplicate(root);
    // PrintLevelWise(root1);
    // int s;
    // cin >> s;
    // BinaryTreeNode<int> *temp = root;
    // PairSum(root, s, temp);
    // int data1 , data2;
    // cin >> data1;
    // cin  >> data2;
    // cout << LCA(root, data1, data2 ) << endl;
    cout << largestBSTheight(root) << endl;

    // cout << isBST(root) << endl;
    // replace(root);
    // PrintLevelWise(root);

    // int ele;
    // cin >> ele;
    // BST insertData(ele, root);
    // vector<int> v = *pathBST(root, ele);
    // for(int i=0;i<v.size();i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // BST obj;
    // obj.insertData(10);
    // obj.insertData(9);
    // obj.insertData(30);
    // obj.insertData(5);
    // obj.insertData(2);
    // obj.insertData(60);

    // obj.printTree();

    // int ele;
    // cin >> ele;
    // if (search(root, ele))
    //     cout << "true" << endl;
    // else
    //     cout << "false" << endl;
    // int l, r;
    // cin >> l >> r;
    // printRange(root, l, r);
    // cout << endl;
    // int n;
    // cin >> n;
    // int arr[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin >> arr[i];
    // }
    // int fi=0;
    // int li=n-1;
    // BinaryTreeNode<int>* root = constructBST(arr,fi,li);
    // PrintLevelWise(root);
}

// 8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1