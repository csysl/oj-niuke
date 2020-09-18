//
// Created by 92582 on 9/18/2020.
//

#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
};


class Solution {
public:

    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 计算数组中任意四个数的和，判断是否等于目标值，返回所有满足条件的四元组
     * @param nums int整型vector 整型数组
     * @param target int整型 目标值
     * @return int整型vector<vector<>>
     */
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
        // write code here
        vector<vector<int> > res;
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int ws = 0, we = len - 1;
        bool flag = true;
        while (we - ws > 2) {
            int ls = ws + 1, le = we - 1;
            int t = target - (nums[ws] + nums[we]);
            while (ls < le) {
                if (nums[ls] + nums[le] > t) --le;
                else if (nums[ls] + nums[le] < t) ++ls;
                else {
                    vector<int> tmp;
                    tmp.push_back(nums[ws]);
                    tmp.push_back(nums[ls]);
                    tmp.push_back(nums[le]);
                    tmp.push_back(nums[we]);
                    res.push_back(tmp);
                    --le;
                }
            }
            if (flag) {
                flag = false;
                ++ws;
            } else {
                flag = true;
                --we;
            }
        }
        return res;
    }
};

int main() {
    vector<int> val = {1, 0, -1, 0, -2, 2};  //-2,-1,0,0,1,2
    Solution s{};
    auto res = s.fourSum(val, 0);
    for (auto &items:res) {
        for (auto item:items)cout << item << " ";
        cout << endl;
    }
}