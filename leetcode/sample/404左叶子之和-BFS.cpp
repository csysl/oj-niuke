//
// Created by 92582 on 9/19/2020.
//

//
// Created by 92582 on 9/18/2020.
//

#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
};


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:

    int sumOfLeftLeaves(TreeNode *root) {
        queue<TreeNode *> q;
        q.push(root);
        int res = 0;
        if (root == nullptr) return res;
        while (!q.empty()) {
            auto q_size = q.size();
            while (q_size--) {
                auto top = q.front();
                if (top->left != nullptr) {
                    q.push(top->left);
                    if (top->left->left == nullptr && top->left->right == nullptr)res += top->left->val;
                }
                if (top->right != nullptr) q.push(top->right);
                q.pop();

            }
        }
        return res;
    }
};

int main() {
    vector<int> val = {1, 0, -1, 0, -2, 2};  //-2,-1,0,0,1,2
    Solution s{};
    auto res = s.fourSum(val, 0);
    for (auto &items:res) {
        for (auto item:items)cout << item << " ";
        cout << endl;
    }

    vector<vector<int>> a = {{1, 2, 3}};
    vector<int> b = {1, 2, 3};
    if (*a.rbegin() != b)cout << "hello";
}