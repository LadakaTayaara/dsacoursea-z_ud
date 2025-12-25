#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string convertbinary(int n){
        string res ="";
        while(n!=1){
            if(n%2==1){res +='1';}
            else{res +='0';}
            reverse(res.begin(),res.end());
            
        }
        return res;
    }

    int convertdec(string s){
        int sum=0; int p2=1;
        int len=s.length();
        for(int i=len-1;i>=0;i--){
            if(s[i]==1){
                sum+=p2;
                p2*=2;
            }
        }
        return sum;
    }

    int reverseBits(int n) {
        string g=convertbinary(n);
        reverse(g.begin(),g.end());
        return convertdec(g);
    }
};