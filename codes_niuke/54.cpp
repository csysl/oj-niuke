//
// Created by 92582 on 8/21/2020.
//

#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:

    string s;
    char num[256] = {0};

    //Insert one char from stringstream
    void Insert(char ch) {
        s.push_back(ch);
        ++num[ch];
    }

    //return the first appearence once char in current stringstream
    char FirstAppearingOnce() {
        for(char i : s){
            if (num[i]==1) return i;
        }
        return '#';
    }
};


int main() {
    stringstream ss;
    ss << "hello world";
    string a, b;
    ss >> a >> b;
    cout << a << "111" << b << endl;


    return 0;
}