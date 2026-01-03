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
    int n,k;
    cin >> n >> k;
    string s;
    cin>>s;
    if(k>((float)n/2)){
        k--;
        while(k<=n-1){
            if(k!=n-1){
                cout<<"RIGHT"<<endl;
            }
            k++;
        }
        for(int i=n-1;i>=0;i--){
            cout<<"PRINT "<<s[i]<<endl;
            if(i!=0){
                cout<<"LEFT"<<endl;
            }
        }
    }
    else if(k<=((float)n/2)){
        k--;
        while(k>=0){
            if(k!=0){
                cout<<"LEFT"<<endl;
            }
            k--;
        }
        for(int i=0;i<=n-1;i++){
            cout<<"PRINT "<<s[i]<<endl;
            if(i!=n-1){
                cout<<"RIGHT"<<endl;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}