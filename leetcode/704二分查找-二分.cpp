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
    int search(vector<int> &nums, int target) {

        int sind = 0, eind = nums.size();

        int res = -1;
        while (eind > sind) {
            int mind = (sind + eind) / 2;
            if (target == nums[mind]) {
                res = mind;
                break;
            } else if (target > nums[mind]) {
                sind = mind + 1;
            } else {
                eind = mind;
            }
        }
        return res;
    }


};

int main() {

    Solution s{};
    vector<int> v = {-1, 0, 3, 5, 9, 12};
    cout << s.search(v, 2) << endl;

    return 0;
}