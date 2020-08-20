//
// Created by 92582 on 2019/2/28.
//

/*
 * 排列组合问题
 */

class Solution {
public:
    int getcombnum(int a, int b){
        long long res, tmp1=1,tmp2=1;
        for(int i=a;i>0;--i){
            tmp1*=b;
            --b;
            tmp2*=a;
            --a;
        }
        res=tmp1/tmp2;
        return res;
    }

    int jumpFloor(int number) {
        int res=1;
        int tag=(number+1)/2;
        for(int i=number-1;i>=tag;--i){
            res+=getcombnum(number-i,i);
        }
        return res;
    }
};