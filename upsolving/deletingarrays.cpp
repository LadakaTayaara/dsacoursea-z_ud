#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n),c(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        long long minc=1e9;
        long long res=0;
        for(int i=0;i<n;i++){
            if(c[i]<minc){minc=c[i];}
            res+=a[i]*minc;
        }
        cout<<res<<'\n';
    }
}