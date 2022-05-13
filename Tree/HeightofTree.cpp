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

int height(TreeNode<int>*root, int ans, int mx)
{
    if(root->children.size()!=0)
    ans++;
    for(int i=0;i<root->children.size();i++)
    {
        ans = height(root->children[i],ans,mx);
    }
    mx=max(mx,ans);
    return mx;
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    cout << "Height of the tree" << endl;
    int ans=1;
    int mx=INT_MIN;
    cout << height(root,ans, mx) << endl;
}
