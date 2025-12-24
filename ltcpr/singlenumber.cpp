#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int mx=0;
        int len=nums.size();
        for(int i=0;i<len;i++){
            if(nums[i]>mx){
                mx=nums[i];
            }
        }
        vector<int> hsh(mx+1);
        for(int i=0;i<len;i++){
            hsh[nums[i]]++;
        }
        int res;
        for(int i=0;i<=mx;i++){
            if(hsh[i]==1){
                res = i;
            }
        }
        return res;
    }
};