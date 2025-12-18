#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int jump(vector<int> &a,vector<int> &dp,int n){
    if(n==0){return 0;}
    if(dp[n]!=-1){
        return dp[n];
    }
    else{
        int ad=jump(a,dp,n-1)+abs(a[n]-a[n-1]);
        int bd=INT_MAX;
        if(n>1){
            bd=jump(a,dp,n-2)+abs(a[n]-a[n-2]);
        }
        return dp[n]=min(ad,bd);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> dp(n,-1);
    dp[0]=0;
    int ans=jump(a,dp,n-1);
    cout<<ans;
}