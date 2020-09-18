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

    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> res;
        int s = 0, e = numbers.size() - 1;
        while (s < e) {
            if (numbers[s] + numbers[e] < target)++s;
            else if (numbers[s] + numbers[e] > target)--e;
            else {
                res.push_back(s + 1);
                res.push_back(e + 1);
                break;
            }
        }
        return res;
    }

};

int main() {

    Solution s{};
    vector<int> v = {2, 7, 11, 15};
    s.twoSum(v, 9);
    return 0;
}