#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            a[i]=i+1;
        }
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i]*b[i];
        }
        cout<<sum<<'\n';
    }
}