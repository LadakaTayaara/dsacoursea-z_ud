#include <bits/stdc++.h>
using namespace std;

int climbstairs(int n){
    if (n==0)return 1;
    if (n==1) return 0;
    int lf=climbstairs(n-1);
    int rt=climbstairs(n-2);
    return lf+rt;
}

int main(){
    int n;
    cin>>n;
    int a=n-1;
    int b=n-2;
    int curr;
    for(int i=2;i<=n;i++){
        curr=a+b;
        b=a;
        a=curr;
    }
    cout<<a;
}