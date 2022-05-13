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
    // cout << "Enter root data" << endl;
    cin >> rootdata;
    TreeNode<int> *root = new TreeNode<int>(rootdata);
    queue<TreeNode<int> *> q;
    q.push(root);
    while (q.size() != 0)
    {
        TreeNode<int> *front = q.front();
        q.pop();
        int n;
        // cout << "Enter number of children of " << front->data << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            // cout << "Enter " << (i + 1) << " child of " << front->data << endl;
            int childData;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            q.push(child);
        }
    }
    return root;
}

int NumNodes(TreeNode<int>*root)
{
    if(root == NULL)
    {
        return 0;
    }
    int ans=1;
    for(int i=0;i<root->children.size();i++)
    {
        ans += NumNodes(root->children[i]);
    }
    return ans;
}

int NodesSum(TreeNode<int>*root)
{
    int sum=0;
    
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    cout << "Number of Nodes" << endl;
    cout << NumNodes(root) << endl;
}
