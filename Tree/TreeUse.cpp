#include <bits/stdc++.h>
// #include <TreeNode.h>
using namespace std;
template <typename T>

class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(int data)
    {
        this->data = data;
    }
};

TreeNode<int> *takeInputLevelWise()
{
    int rootdata;
    cout << "Enter root data" << endl;
    cin >> rootdata;
    TreeNode<int> *root = new TreeNode<int>(rootdata);
    queue<TreeNode<int> *> q;
    q.push(root);
    while (q.size() != 0)
    {
        TreeNode<int> *front = q.front();
        q.pop();
        int n;
        cout << "Enter number of children of " << front->data << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter " << (i + 1) << " child of " << front->data << endl;
            int childData;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            q.push(child);
        }
    }
    return root;
}

TreeNode<int> *takeInput()
{
    int rootdata;
    cout << "Enter data" << endl;
    cin >> rootdata;
    TreeNode<int> *root = new TreeNode<int>(rootdata);
    int n;
    cout << "Enter the number of children of " << rootdata << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

void PrintLevelWise(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<TreeNode<int> *> q;
    q.push(root);
    while (q.size() != 0)
    {
        TreeNode<int> *front = q.front();
        q.pop();
        cout << front->data << ":";
        int l = front->children.size();
        for (int i = 0; i < l - 1; i++)
        {

            cout << front->children[i]->data << ",";
            q.push(front->children[i]);
        }
        if (l != 0)
        {
            cout << front->children[l - 1]->data << endl;
            q.push(front->children[(l - 1)]);
        }
        else
        cout << endl;
    }
}

void printTree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

int main()
{
    /*TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *node1 = new TreeNode<int>(2);
    TreeNode<int> *node2 = new TreeNode<int>(3);
    TreeNode<int> *node1_1 = new TreeNode<int>(4);

    root->children.push_back(node1);
    root->children.push_back(node2);
    node1->children.push_back(node1_1);**/

    TreeNode<int> *root = takeInputLevelWise();
    PrintLevelWise(root);
}