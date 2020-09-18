//
// Created by 92582 on 9/18/2020.
//

#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
};


class Solution {
public:

    /**
     * 合并两个升序链表
     * @param l1 ListNode类 链表1
     * @param l2 ListNode类 链表2
     * @return ListNode类
     */
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        // write code here
        auto res = new ListNode{-1};
        ListNode *tp = res;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                tp->next = l1;
                l1 = l1->next;
            } else {
                tp->next = l2;
                l2 = l2->next;
            }
            tp = tp->next;
        }
        if (l1 == nullptr)tp->next = l2;
        else tp->next = l1;
        return res->next;
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
}