//
// Created by 92582 on 2018/12/12.
//
#include <vector>

using namespace std;


struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
            val(x), next(NULL) {
    }
};

class Solution {
public:
    /*
     *直接按顺序存入新的vector数组arr，再反序存入另一个新数组res
     * 也可以反转链表，然后存入数组
     */
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> arr;
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
        vector<int> res;
        for(auto iter=arr.crbegin();iter!=arr.crend();++iter)
            res.push_back(*iter);
        return res;
    }
};