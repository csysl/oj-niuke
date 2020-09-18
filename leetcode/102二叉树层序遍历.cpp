//
// Created by 92582 on 2020/9/6.
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
    vector<vector<int>> levelOrderBottom(TreeNode *root) {
        vector<vector<int>> res;
        if (root == nullptr) return res;
        queue<TreeNode *> q, q2;
        q.push(root);
        while (!q.empty()) {
            vector<int> tmp;
            while (!q.empty()) {
                auto n = q.front();
                q2.push(n);

                tmp.push_back(n->val);
                q.pop();
            }
            res.push_back(tmp);
            while (!q2.empty()) {
                auto n = q2.front();
                if (n->left != nullptr) q.push(n->left);
                if (n->right != nullptr) q.push(n->right);
                q2.pop();
            }
        }
        return res;
    }
};

int main() {


    return 0;
}
