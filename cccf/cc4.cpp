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

int check(int num){
    while(num>0){
        if(num%2==0){
            return 1;
        }
        else{
            num/=10;
        }
    }
    return 0;
}

void solve() {
    int n;
    cin >> n;
    int a;
    cin >> a;
    if(check(a)){
        cout<<1<<"\n";
        return;
    }
    else{
        
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