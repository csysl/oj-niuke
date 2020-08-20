//
// Created by 92582 on 2020/8/19.
//

#include <bits/stdc++.h>

class Solution {
public:
    void replaceSpace(char *str, int length) {
        int num = 0;
        for (int i = 0; i < length; ++i) {
            if (str[i] == ' ') {
                ++num;
            }
        }
        char *ns = new char[length + num * 2]();
        int ind = 0;
        for (int i = 0; i < length; ++i) {
            if (str[i] != ' ') {
                ns[ind++] = str[i];
            } else {
                ns[ind++] = '%';
                ns[ind++] = '2';
                ns[ind++] = '0';
            }
        }
        strcpy(str, ns);
    }
};

