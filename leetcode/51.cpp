//
// Created by 92582 on 2020/9/2.
//

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>> res;
        vector<int> nums;
        nums.reserve(n);
        for (int i = 0; i < n; ++i)nums.emplace_back(i);

        cal(res, nums, 0, n);

        vector<vector<string>> resstr(res.size());
        for (int i = 0; i < res.size(); ++i) {
            for (int j = 0; j < n; ++j) {
                string tmp(n, '.');
                tmp[res[i][j]] = 'Q';
                resstr[i].push_back(tmp);
            }
        }
        return resstr;
    }

    void cal(vector<vector<int>> &res, vector<int> &nums, int f, int n) {
        if (f == n) {
            res.push_back(nums);
            return;
        }
        for (int i = f; i < n; ++i) {

            swap(nums[i], nums[f]);
            if (f > 0 && abs(nums[f] - nums[f - 1]) <= 1) {
                swap(nums[i], nums[f]);
                continue;
            } else {
                cal(res, nums, f + 1, n);
                swap(nums[i], nums[f]);
            }

        }
    }
};

int main() {
    vector<int> n = {1, 2, 3};
    string str = "e9";
    Solution s{};
    auto res = s.solveNQueens(1);
    for (auto &items:res) {
        for (auto &item:items) {
            cout << item << endl;
        }
        cout << endl;
    }


    return 0;
}