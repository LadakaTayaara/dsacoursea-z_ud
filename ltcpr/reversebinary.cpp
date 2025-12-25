#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long reverseBits(int n) {
        long long res=0;
        long long k=pow(2,31);
        int oe=0b0001;
        for(int i=31;i>=0;i--){
            if((n & oe) != 0){
                res+=k;
            }
            oe = oe << 1;
            k/=2;
        }
        return res;
    }
};