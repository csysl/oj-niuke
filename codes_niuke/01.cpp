//
// Created by 92582 on 2020/8/19.
//

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {

        int x = array.size(), y = array[0].size();

        //找到左右边界
        int a = y - 1, b = 0;
        for (int i = 0; i < y; ++i) {
            if (array[x - 1][i] < target) {
                b = i;
            } else if (array[x - 1][i] == target) {
                return true;
            } else {
                break;
            }
        }
        for (int i = y - 1; i >= 0; --i) {
            if (array[0][i] > target) {
                a = i;
            } else if (array[0][i] == target) {
                return true;
            } else {
                break;
            }
        }
        if (a - b <= 1)return false;

        //找到上下边界
        int c = x - 1, d = 0;
        for (int i = 0; i < x; ++i) {
            if (array[i][a - 1] < target) {
                d = i;
            } else if (array[i][a - 1] == target) {
                return true;
            } else {
                break;
            }
        }
        for (int i = x - 1; i >= 0; --i) {
            if (array[i][b + 1] > target) {
                c = i;
            } else if (array[i][b + 1] == target) {
                return true;
            } else {
                break;
            }
        }
        if (c - d <= 1)return false;

        //在找到的区域内做二分查找
        for (int i = d + 1; i < c; ++i) {
            int low = b + 1, high = a - 1;
            while (low <= high) {
                int tmp = (low + high) / 2;
                if (target > array[i][tmp]) {
                    low = tmp + 1;
                } else if (target == array[i][tmp]) {
                    return true;
                } else {
                    high = tmp - 1;
                }
            }
        }
        return false;
    }
};


int main() {


    return 0;
}