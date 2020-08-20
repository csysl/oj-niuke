//
// Created by 92582 on 2020/8/20.
//

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
    vector<int> PrintFromTopToBottom(TreeNode *root) {
        queue<TreeNode *> q;
        vector<int> res;
        q.push(root);
        while (!q.empty()) {
            auto t = q.front();
            q.pop();
            if(t!= nullptr){
                res.emplace_back(t->val);
                q.push(t->left);
                q.push(t->right);
            }
        }
        return res;
    };
};


int main() {


    return 0;
}