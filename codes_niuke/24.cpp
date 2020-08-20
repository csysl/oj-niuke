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
    int TreeDepth(TreeNode *pRoot) {
        if (pRoot == nullptr) return 0;

        auto a = TreeDepth(pRoot->left);
        auto b = TreeDepth(pRoot->right);

        return max(a, b) + 1;
    }
};


int main() {
    vector<int> r = {1, 2, 4, 3, 7, 9, 8, 6};
    Solution s{};


    return 0;
}