#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode()
        : val(0)
        , left(nullptr)
        , right(nullptr)
    {
    }
    TreeNode(int x)
        : val(x)
        , left(nullptr)
        , right(nullptr)
    {
    }
    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x)
        , left(left)
        , right(right)
    {
    }
};

pair<int, int> fastDiameter(TreeNode* root)
{
    pair<int, int> treeSpec;
    if (root == NULL) {
        treeSpec.first = treeSpec.second = 0;
        return treeSpec;
    }
    pair<int, int> leftTreeSpec = fastDiameter(root->left);
    pair<int, int> rightTreeSpec = fastDiameter(root->right);

    treeSpec.first = 1 + max(leftTreeSpec.first, rightTreeSpec.first);
    treeSpec.second = max(leftTreeSpec.first + rightTreeSpec.first, max(leftTreeSpec.second, rightTreeSpec.second));
    return treeSpec;
}

int diameterOfBinaryTree(TreeNode* root)
{
    pair<int, int> treeSpec = fastDiameter(root);
    return treeSpec.second;
}

TreeNode* constructTree(vector<int> nums, int idx)
{
    if (idx >= nums.size() || nums[idx] == -1)
        return NULL;

    TreeNode* n = new TreeNode(nums[idx++]);
    n->left = constructTree(nums, idx);
    n->right = constructTree(nums, idx);

    return n;
}

int main()
{
    int n, num;
    vector<int> nums;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }

    TreeNode* root = constructTree(nums, 0);
    cout << diameterOfBinaryTree(root);
    return 0;
}
