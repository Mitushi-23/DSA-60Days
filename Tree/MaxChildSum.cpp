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

TreeNode<int>* MaxChildSum(TreeNode<int>*root, int mx)
{
     
    queue<TreeNode<int> *> q;
    q.push(root);
    TreeNode<int>* node;
    while (q.size() != 0)
    {
        TreeNode<int> *front = q.front();
        q.pop();
        int l = front->children.size();
        int sum=front->data;
        for (int i = 0; i < l; i++)
        {

            sum += front->children[i]->data;
            q.push(front->children[i]);
        }
        
        if(sum>mx)
        {
            mx = sum;
            node = front;
        }
    }
    return node;
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    int mx = INT_MIN;
    cout << MaxChildSum(root, mx)->data << endl;

}