//time limit exceeded
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int id1=a.length()-1;
        int id2=b.length()-1;
        int carry = 0;
        while(id1>=0 || id2>=0 || carry!=0){
            int sum=carry;
            if(id1>=0){
                sum+=a[id1]-'0';
                id1--;
            }
            if(id2>=0){
                sum+=b[id2]-'0';
                id2--;
            }
            res+=to_string(sum%2);
            carry=sum/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};