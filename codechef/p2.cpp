#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int n;
    int cases;
    int x;
    int sum;
    cin>>cases;
    while(cases--){
        sum=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum>=0){cout<<0<<"\n";}
        else{
            x=ceil((0.0-sum)/n);
            cout<<x<<"\n";
        }
    }
    return 0;
}