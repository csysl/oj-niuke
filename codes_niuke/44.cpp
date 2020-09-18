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
    string ReverseSentence(string str) {
        string res, tmp;
        vector<string> vs;;
        for (char c:str) {
            if (c == ' ') {
                vs.emplace_back(tmp);
                tmp.clear();
            } else
                tmp.push_back(c);
        }
        vs.emplace_back(tmp);
        for (int i = vs.size() - 1; i >= 0; --i) {
            cout << vs[i] << endl;
            res.append(vs[i]);
            if (i != 0)res.push_back(' ');
        }
        return res;
    }
};


int main() {

//    string a,b="world!";
//    a.append(b);
//    cout<<a<<"xxx"<<b<<endl;

    string s = "student. a am I";
    Solution ss{};
    cout << ss.ReverseSentence(s);


    return 0;
}