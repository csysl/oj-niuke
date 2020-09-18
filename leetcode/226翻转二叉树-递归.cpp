//
// Created by 92582 on 2020/9/16.
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
    TreeNode *invertTree(TreeNode *root) {
        fanzhuan(root);
        return root;
    };

    void fanzhuan(TreeNode *root) {
        if (root == nullptr) return;
        if (root->left == nullptr && root->right == nullptr) return;
        swap(root->left, root->right);
        fanzhuan(root->left);
        fanzhuan(root->right);
    }

};

int main() {
    int (*a[10])(int);
    float d = 1.0f;
    return 0;
}