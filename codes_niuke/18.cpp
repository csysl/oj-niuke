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
    void Mirror(TreeNode *pRoot) {
        if (pRoot == nullptr) return;
        if (pRoot->left == nullptr && pRoot->right == nullptr) return;
        swap(pRoot);
        Mirror(pRoot->left);
        Mirror(pRoot->right);
    }

    static void swap(TreeNode *r) {
        auto tmp = r->right;
        r->right = r->left;
        r->left = tmp;
    }
};


int main() {


    return 0;
}
