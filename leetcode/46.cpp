//
// Created by 92582 on 2020/8/22.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> res;
        int n = nums.size();
        auto *flags = new bool[n]();
        res = cal(nums, flags, n, n);
        delete[] flags;
        return res;
    }

    vector<vector<int>> cal(vector<int> &nums, bool *flags, int n, int m) {
        vector<vector<int>> res;
        for (int i = 0; i < n; ++i) {
            if (!flags[i]) {
                if (m == 1) {
                    res.push_back(vector<int>{nums[i]});
                    return res;
                }
                flags[i] = true;
                auto paths = cal(nums, flags, n, m - 1);
                if (!paths.empty()) {
                    for (auto &p:paths) {
                        vector<int> t;
                        t.push_back(nums[i]);
                        for (auto it:p) {
                            t.push_back(it);
                        }
                        res.push_back(t);
                    }
                }
                flags[i] = false;
            }
        }
        return res;
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
