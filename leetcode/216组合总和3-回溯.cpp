//
// Created by 92582 on 2020/9/11.
//

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> tmp(k, 0);
        cal(res, k, n, 0, 0, 0, tmp);

        return res;
    }

    void cal(vector<vector<int>> &res, int k, int n, int val, int len, int val_sum, vector<int> &tmp) {
        if (len == k) {
            if (val_sum == n)res.push_back(tmp);
            return;
        }
        for (int i = val + 1; i < 10; ++i) {
            tmp[len] = i;
            cal(res, k, n, i, len + 1, val_sum + i, tmp);
            tmp[len] = 0;
        }
    }
};

int main() {

    Solution s{};
    auto res = s.combinationSum3(3, 9);
    for (auto &item:res) {
        for (auto &it:item) {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}