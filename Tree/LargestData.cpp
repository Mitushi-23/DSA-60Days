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

int largestData(TreeNode<int>*root, int mx)
{
    mx = max(mx, root->data);
    for(int i=0;i<root->children.size();i++)
    {
        mx = largestData(root->children[i],mx);
    }
    return mx;
}


int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    cout << "Nodes with largest data" << endl;
    int mx=INT_MIN;
    cout << largestData(root,mx) << endl;
}
