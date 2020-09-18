//
// Created by 92582 on 8/26/2020.
//
class Solution {
public:
    int coinChange(vector<int> &coins, int amount) {
        vector<int> cnum(amount + 1, amount + 1);

        if (amount < 0) return -1;
        if (amount == 0) return 0;
        cnum[0] = 0;
        for (auto coin:coins) {
            for (int i = 1; i <= amount; ++i) {
                if (i - coin >= 0)cnum[i] = min(cnum[i - coin] + 1, cnum[i]);
            }
        }
        return cnum[amount] < amount + 1 ? cnum[amount] : -1;
    }

};
