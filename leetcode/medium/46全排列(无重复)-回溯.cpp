//
// Created by 92582 on 2020/8/22.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> res;
        bool *is_used = new bool[nums.size()]();
        vector<int> path(nums.size());
        cal(res, path, nums, nums.size(), 0, is_used);
        return res;
    }

    void cal(vector<vector<int>> &res, vector<int> &path, vector<int> &nums, int n, int ind, bool *is_used) {
        if (ind  == n) {
            res.push_back(path);
            return;
        }
        for (int i = 0; i < n; ++i) {
            if (!is_used[i]) {
                is_used[i] = true;
                path[ind] = nums[i];
                cal(res, path, nums, n, ind + 1, is_used);
                is_used[i] = false;
            }
        }
    }
};

int main() {
    vector<int> n = {1, 2, 3};
    string str = "e9";
    Solution s{};
    auto res = s.permute(n);
    for (auto &its:res) {
        for (auto it:its) {
            cout << it << " ";
        }
        cout << endl;
    }


    return 0;
}
