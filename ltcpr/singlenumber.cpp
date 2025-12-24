#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        int len=nums.size();
        for(int i=0;i<len;i++){
            res ^= nums[i];
        }
        return res;
    }
};