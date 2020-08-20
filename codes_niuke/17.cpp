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
    bool HasSubtree(TreeNode *pRoot1, TreeNode *pRoot2) {
        if (pRoot1 == nullptr || pRoot2 == nullptr) return false;
        if (IsSametree(pRoot1, pRoot2)) return true;
        if (HasSubtree(pRoot1->left, pRoot2)) return true;
        if (HasSubtree(pRoot1->right, pRoot2)) return true;
        return false;
    }

    bool IsSametree(TreeNode *a, TreeNode *b) {
        if (b == nullptr) return true;
        if (a == nullptr) return false;
        if ((*a).val == (*b).val) {
            auto l = IsSametree(a->left, b->left);
            auto r = IsSametree(a->right, b->right);
            return l && r;
        }
        return false;
    }
};


int main() {


    return 0;
}