//
// Created by 92582 on 2020/9/17.
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
    bool isSymmetric(TreeNode *root) {
        if (root == nullptr) return true;
        queue<TreeNode *> q;
        q.push(root->left);
        q.push(root->right);
        while (!q.empty()) {
            auto lp = q.front();
            q.pop();
            auto rp = q.front();
            q.pop();
            if (lp == nullptr && rp == nullptr) continue;
            if (lp == nullptr || rp == nullptr) return false;
            if (lp->val != rp->val)return false;
            q.push(lp->left), q.push(rp->right);
            q.push(lp->right), q.push(rp->left);
        }
        return true;
    }

};

int main() {
    int (*a[10])(int);
    float d = 1.0f;
    return 0;
}