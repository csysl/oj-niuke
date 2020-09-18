//
// Created by 92582 on 2020/9/6.
//

#include <bits/stdc++.h>

using namespace std;


class Node {
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node *> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>> res;
        if (root == nullptr) return res;
        queue<Node *> q;
        q.push(root);
        res.push_back({root->val});
        while (!q.empty()) {
            auto _size = q.size();
            vector<int> tmp;
            while (_size--) {
                auto n = q.front();
                q.pop();
                for (auto &item:n->children) {
                    q.push(item);
                    tmp.push_back(item->val);
                }

            }
            if(!tmp.empty())res.push_back(tmp);
        }
        return res;
    }
};

int main() {


    return 0;
}
