//Bhaskar Varshney
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
TreeNode *BuildTree()
{
    int d;
    cin >> d;
    if (d == -1)
        return NULL;
    TreeNode *Node = new TreeNode(d);
    cout << "Enter left child of " << d << " : ";
    Node->left = BuildTree();
    cout << "Enter right child of " << d << " : ";
    Node->right = BuildTree();
    return Node;
}
void print(TreeNode *root)
{
    if (root == NULL)
        return;
    print(root->left);
    cout << root->val << " ";
    print(root->right);
}
vector<int> ExtremeNodes(TreeNode *root)
{
    TreeNode *temp = NULL;
    queue<TreeNode *> q;
    q.push(root);
    q.push(NULL);
    vector<int> v;
    int is_level_p = 0;
    int flag = 1;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            is_level_p = 0;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            if (flag == 0 && is_level_p == 0)
            {
                v.push_back(temp->val);
                is_level_p = 1;
                flag = 1;
            }
            else if (flag == 1 && is_level_p == 0 && q.front() == NULL)
            {
                v.push_back(temp->val);
                is_level_p = 1;
                flag = 0;
            }
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
    return v;
}
int main()
{
    cout << "Build Tree : ";
    TreeNode *root = BuildTree();
    cout << "\nPreOrder of Tree is: ";
    print(root);
    vector<int> v = ExtremeNodes(root);
    cout << "\nExtreme nodes in alternate order : ";
    for (auto it : v)
        cout << it << " ";
}
