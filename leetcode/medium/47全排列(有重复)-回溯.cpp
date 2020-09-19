//
// Created by 92582 on 9/19/2020.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int> &nums) {
        vector<vector<int>> res;
        int mi = INT32_MAX, ma = -1;
        int n = nums.size();
        for (auto it:nums) {
            mi = min(mi, it);
            ma = max(ma, it);
        }
        int len = ma - mi + 1;
        int *used_num = new int[len]();
        vector<int> path(n);
        for (auto &it:nums) {
            ++used_num[it - mi];
        }
        cal(res, path, n, len, 0, used_num, mi);


        return res;
    }

    void cal(vector<vector<int>> &res, vector<int> &path, int n, int len, int ind, int *used_num,
             int mi) {
        if (ind == n) {
            res.push_back(path);
            return;
        }
        for (int i = 0; i < len; ++i) {
            if (used_num[i] != 0) {
                --used_num[i];
                path[ind] = i + mi;
                cal(res, path, n, len, ind + 1, used_num, mi);
                ++used_num[i];
            }
        }
    }
};


int main() {
    vector<int> val = {1, 1, 2};
    Solution s{};
    auto res = s.permuteUnique(val);
    for (auto &items:res) {
        for (auto item:items)cout << item << " ";
        cout << endl;
    }

    return 0;
}