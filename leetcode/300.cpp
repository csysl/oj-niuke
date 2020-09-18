//
// Created by 92582 on 2020/8/26.
//

class Solution {
public:
    int lengthOfLIS(vector<int> &nums) {
        if(nums.empty()) return 0;
        if(nums.size()==1) return 1;


        int length = nums.size();
        vector<int> len(length, 0);
        int res = 0;

        for (int i = length - 2; i >= 0; --i) {
            for (int j = i + 1; j < length; ++j) {
                if (nums[i] < nums[j]) len[i] = max(len[i], len[j] + 1);
            }
            res = max(res, len[i]);
        }
        return res + 1;   //len里面没有计算当前元素本身
    }
};