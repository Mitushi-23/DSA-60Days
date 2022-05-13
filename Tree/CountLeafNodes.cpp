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

int countLeafNodes(TreeNode<int>*root, int ans)
{
    if(root->children.size()==0)
    ans++;
    for(int i=0;i<root->children.size();i++)
    {
        ans = countLeafNodes(root->children[i],ans);
    }
    return ans;
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    cout << "Count of leaf Nodes" << endl;
    int ans=0;
    cout << countLeafNodes(root,ans) << endl;
}
