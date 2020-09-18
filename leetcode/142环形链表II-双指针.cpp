//
// Created by 92582 on 9/14/2020.
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

    ListNode *detectCycle(ListNode *head) {
        ListNode *res = nullptr;
        auto slow = head, fast = head;
        bool flag = false;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast) {
                flag = true;
                break;
            }
        }
        if (flag) {
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            res = slow;
        }

        return res;
    }

};

int main() {

    Solution s{};
    return 0;
}