//
// Created by 92582 on 2020/8/26.
//

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        if (nums.empty()) return 0;
        if (nums.size() == 1) return nums[0];

        int len = nums.size();
        vector<int> val(len, 0);
        val[len-1]=nums[len-1];

        for (int i = len - 2; i >= 0; --i) {
            val[i] = max(nums[i], nums[i] + val[i + 1]);
//            cout<<val[i]<<endl;
        }
        int res = INT32_MIN;
        for (int i = 0; i < len; ++i) res = max(res, val[i]);
        return res;
    }
};

int main() {
    vector<int> n={-2,1,-3,4,-1,2,1,-5,4};
    Solution s{};
    s.maxSubArray(n);


    return 0;
}