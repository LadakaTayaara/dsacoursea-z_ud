#include <bits/stdc++.h>
using namespace std;

// Type aliases
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;

// Macros
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n;
    cin >> n;
    int f=0;
    int t=0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    bool flag=0;
    for(int i=0;i<n;i++){
        flag=0;
        if(a[i]==5){
            f++;
            flag=1;
        }
        else if(a[i]==10 && f>0){
            f--;
            t++;
            flag=1;
        }
        else if(a[i]==20){
            if(f>0 && t>0){
                f--;
                t--;
                flag=1;
            }
            else if(f>=3){
                f-=3;
                flag=1;
            }
        }
    }

    if(flag){cout<<"true";}
        else{
            cout<<"false";
        }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}