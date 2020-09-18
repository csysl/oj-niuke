//
// Created by 92582 on 8/31/2020.
//

#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>> &rooms) {
        auto room_num = rooms.size();
        auto *room_flag = new bool[room_num]();
        room_flag[0] = true;
        queue<int> q;
        q.push(0);
        while (!q.empty()) {
            auto t = q.front();
            q.pop();
            room_flag[t] = true;
            for (auto it:rooms[t]) {
                if (!room_flag[it]) {
                    q.push(it);
                }
            }
        }
        for (int i=0;i<room_num;++i){
            if (!room_flag[i]) return false;
        }
        return true;
    }

};


int main() {
    Solution s{};
    vector<vector<int>> v={{1},{2},{3},{}};
    s.canVisitAllRooms(v);

    return 0;
}