#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int InversePairs(vector<int> data) {
        long long res=0;
        map<int,int> kv;

    }
};

int f(int &a,int b){
    return ((a++)+b);
}

class A{
public:
    A(){cout<<1<<endl;}
    A(int a){cout<<2<<endl;}
    ~A(){cout<<3<<endl;}
};
A t(A a){
    return a;
}

int main() {
//    int a=0x7fffffff,b=0x80000000;
//    cout<<a+b<<endl;
    A a=A{1};
    A b=t(a);

    return 0;
}