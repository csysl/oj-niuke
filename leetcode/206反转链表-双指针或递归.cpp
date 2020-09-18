//
// Created by 92582 on 9/17/2020.
//

#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:

    ListNode *reverseList(ListNode *head) {
        if (head == nullptr)return head;
        ListNode *t1 = nullptr, *t2 = nullptr;
        while (true) {
            t2 = head->next;
            head->next = t1;
            if (t2 == nullptr)break;
            t1 = head;
            head = t2;
        }
        return head;
    }

};

int main() {

    Solution s{};
    vector<int> v = {2, 7, 11, 15};
    return 0;
}