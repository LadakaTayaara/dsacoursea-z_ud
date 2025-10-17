#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0)return 0;
    if(n==1)return 1;
    int curr;
    int p1=n-1;
    int p2=n-2;
    for(int i=2;i<=n;i++){
        int rt=p1+abs(curr-p1);
        int lt=p2+abs(curr-p2);
        p2=p1;
        p1=curr;
        curr=min(rt,lt);
    }
    cout<<p1;
}