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
    TreeNode *reConstructBinaryTree(vector<int> &pre, vector<int> &vin) {

        if (pre.empty() || vin.empty()) return nullptr;

        auto *root = new TreeNode{pre[0]};
        int me = find(vin.begin(), vin.end(), pre[0]) - vin.begin();

        vector<int> a, b, c, d;
        for (int i = 0; i < pre.size(); ++i) {
            if (i > 0 && i <= me) a.emplace_back(pre[i]);
            if (i < me) c.emplace_back(vin[i]);
            if (i > me) {
                b.emplace_back(pre[i]);
                d.emplace_back(vin[i]);
            }
        }

        root->left = reConstructBinaryTree(a, c);
        root->right = reConstructBinaryTree(b, d);


        return root;
    };
};

