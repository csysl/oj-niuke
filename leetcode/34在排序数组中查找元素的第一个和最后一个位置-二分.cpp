//
// Created by 92582 on 2020/9/13.
//

#include <bits/stdc++.h>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        vector<int> res;
        int sind = 0, eind = nums.size();
        bool flag = false;
        int l = -1, r = -1;
        while (eind > sind) {
            int mind = (sind + eind) / 2;
            if (target == nums[mind]) {
                eind = mind;
                flag = true;
            } else if (target > nums[mind]) {
                sind = mind + 1;
            } else {
                eind = mind;
            }
        }
        if (flag)l = sind;
        sind = 0, eind = nums.size();
        while (eind > sind) {
            int mind = (sind + eind) / 2;
            if (target == nums[mind]) {
                sind = mind + 1;
            } else if (target > nums[mind]) {
                sind = mind + 1;
            } else {
                eind = mind;
            }
        }
        if (flag)r = sind - 1;
        res.push_back(l);
        res.push_back(r);
        cout << l << " " << r << endl;
        return res;
    }
};

int main() {

    Solution s{};
    vector<int> v = {5, 7, 7, 8, 8, 10};
    s.searchRange(v, 8);

    return 0;
}