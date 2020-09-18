//
// Created by 92582 on 2020/9/12.
//

#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int openLock(vector<string> &deadends, string target) {
        bool *is_visit=new bool[10000]();
        for (auto &it:deadends) {
            int num = strtoint(it);
            is_visit[num] = true;
        }
        if(is_visit[0])return -1;
        if(target=="0000")return 0;
        queue<string> q;
        q.push("0000");
        is_visit[0] = true;
        int res = 1;
        while (!q.empty()) {
            int _size = q.size();
            while (_size--) {
                auto tmp = q.front();
                for(int i=0;i<4;++i){
                    //上转
                    auto ups=uptrans(tmp,i);
                    auto upi=strtoint(ups);
                    if(!is_visit[upi]){
                        if(ups==target) return res;
                        is_visit[upi]=true;
                        q.push(ups);
                    }
                    //下转
                    ups=lowtrans(tmp,i);
                    upi=strtoint(ups);
                    if(!is_visit[upi]){
                        if(ups==target) return res;
                        is_visit[upi]=true;
                        q.push(ups);
                    }
                }
                q.pop();
            }
            ++res;
        }
        return -1;
    };

    int strtoint(const string &str) {
        int res = 0, multi = pow(10, str.length() - 1);
        for (auto &ch:str) {
            res += (ch - '0') * multi;
            multi /= 10;
        }
        return res;
    };

    string uptrans(string a,int i){
        if(a[i]=='9')a[i]='0';
        else a[i]+=1;
        return a;
    };
    string lowtrans(string a,int i){
        if(a[i]=='0')a[i]='9';
        else a[i]-=1;
        return a;
    };
};

int main() {

    Solution s{};
    vector<string> strs = {
            "0201",
            "0101",
            "0102",
            "1212",
            "2002"
    };
    string t = "0202";
    cout << s.openLock(strs, t) << endl;


    return 0;
}