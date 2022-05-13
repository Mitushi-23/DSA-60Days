#include <bits/stdc++.h>
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

bool structIdentical(TreeNode<int>*root1, TreeNode<int>*root2)
{
    if(root1->data != root2->data)
    return false;
    if(root1->children.size()!=root2->children.size())
    return false;
    for(int i=0;i<root1->children.size();i++)
    {
        return structIdentical(root1->children[i], root2->children[i]);
    }
    return true;
}


int main()
{
    TreeNode<int> *root1 = takeInputLevelWise();
    TreeNode<int> *root2 = takeInputLevelWise();
    cout << structIdentical(root1, root2) << endl;
}

/*
10 3 20 30 40 2 41 50 0 0 0 0 
10 3 20 30 40 2 40 50 0 0 0 0
**/