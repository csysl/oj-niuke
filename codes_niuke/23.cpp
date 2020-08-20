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
    bool VerifySquenceOfBST(vector<int> sequence) {
        if (sequence.empty()) return false;  //第一个传进来的是空集合的情况下，不是
        return judge(sequence);
    };
    bool judge(vector<int> &sequence) {
        if (sequence.empty()) return true;
        int val = (*sequence.crbegin());
        vector<int> a, b;
        bool label = false;
        auto eiter = sequence.cend();
        --eiter;
        for (auto iter = sequence.cbegin(); iter != eiter; ++iter) {
            auto item = (*iter);
            if (item > val) label = true;
            if (!label)a.emplace_back(item);
            else b.emplace_back(item);
        }
        if (!b.empty()) {
            for (const auto &item:b) {
                if (item < val)return false;
            }
        }
        auto ba = judge(a);
        auto bb = judge(b);
        return ba && bb;
    };
};


int main() {
    vector<int> r = {1, 2, 4, 3, 7, 9, 8, 6};
    Solution s{};
    if (s.VerifySquenceOfBST(r)) {
        cout << "hello world!" << endl;
    }

    return 0;
}