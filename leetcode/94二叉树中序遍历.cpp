//
// Created by 92582 on 9/14/2020.
//

#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    void cal(vector<int> &res, TreeNode *root) {
        if (root->left != nullptr) cal(res, root->left);
        res.push_back(root->val);
        if (root->right != nullptr) cal(res, root->right);
    }

    vector<int> inorderTraversal(TreeNode *root) {

        vector<int> res;
        if (root == nullptr)return res;
        cal(res, root);
        return res;
    }
};

int main() {

    Solution s{};
    return 0;
}