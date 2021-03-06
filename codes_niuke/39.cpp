#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    bool IsBalanced_Solution(TreeNode *pRoot) {
        if (pRoot == nullptr) return true;
        auto a = length(pRoot->left);
        auto b = length(pRoot->right);
        if (abs(a - b) > 1 || a == -1 || b == -1) return false;
        auto ba = IsBalanced_Solution(pRoot->left);
        auto bb = IsBalanced_Solution(pRoot->right);
        return ba && bb;
    }

    int length(TreeNode *root) {
        if (root == nullptr)return 0;

        auto a = length(root->left);
        auto b = length(root->right);

        if (abs(a - b) > 1 || a == -1 || b == -1) return -1;   //任一子树不平衡，一路返回

        return max(a, b) + 1;
    }
};


int main() {
    vector<int> r = {1, 2, 4, 3, 7, 9, 8, 6};
    Solution s{};


    return 0;
}