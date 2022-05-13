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

TreeNode<int>* nextLarger(TreeNode<int>*root, int ele)
{
    queue<TreeNode<int> *>q;
    q.push(root);
    if(root->data> ele)
    return root;

    for(int i=0;i<root->children.size();i++)
    {
        return nextLarger(root->children[i], ele);
    }
    return NULL;
}


int main()
{
    int ele;
    cin >> ele;
    TreeNode<int> *root = takeInputLevelWise();
    cout << nextLarger(root, ele)->data << endl;
}
