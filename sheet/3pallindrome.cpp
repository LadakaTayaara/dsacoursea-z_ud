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
    if(n==1){
        cout<<'a'<<endl;
        return;
    }
    if(n==2){
        cout<<"bb"<<endl;
        return;
    }

    else{
        string s="";
        for(int i=1;i<=n;i++){
            if(i%4==1 || i%4==2){
                s+='b';
            }
            else if(i%4==3 || i%4==0){
                s+='a';
            }
        }
        cout<<s<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}