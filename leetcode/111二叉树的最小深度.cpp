//
// Created by 92582 on 2020/9/11.
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
    int minDepth(TreeNode *root) {
        if(root==nullptr)return 0;
        queue<TreeNode *> q;
        q.push(root);
        int res = 1;

        while (!q.empty()) {
            int _size = q.size();

            while (_size--) {
                auto tmp = q.front();
                if (tmp->left == nullptr && tmp->right == nullptr) return res;
                if (tmp->left != nullptr)q.push(tmp->left);
                if (tmp->right != nullptr)q.push(tmp->right);
                q.pop();
            }
            ++res;
        }
        return res;
    }
};

int main() {

    Solution s{};


    return 0;
}