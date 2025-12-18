#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int jump(vector<int> &a,vector<int> &dp,int n,int k){
    if(n==0){return 0;}
    if(dp[n]!=-1){
        return dp[n];
    }
    else{
        int bd=INT_MAX;
        for(int i=1;i<=k;i++){
            if(n-i>=0){
            int jp=jump(a,dp,n-i,k)+abs(a[n]-a[n-i]);
            bd=min(bd,jp);
        }
        }
        return dp[n]=bd;
    }
}

int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> dp(n,-1);
    dp[0]=0;
    int ans=jump(a,dp,n-1,k);
    cout<<ans;
}