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
    cin >> rootdata;
    TreeNode<int> *root = new TreeNode<int>(rootdata);
    queue<TreeNode<int> *> q;
    q.push(root);
    while (q.size() != 0)
    {
        TreeNode<int> *front = q.front();
        q.pop();
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int childData;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            q.push(child);
        }
    }
    return root;
}

void printKnodes(TreeNode<int>*root, int k)
{
    if(k==0)
    {
        cout << root->data << endl;
        return;
    }
    for(int i=0;i<root->children.size();i++)
    {
        printKnodes(root->children[i],k-1);
    }
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    int k;
    cin >> k;
    printKnodes(root, k);
}
