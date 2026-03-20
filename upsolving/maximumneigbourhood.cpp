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
        cout<<1<<endl;
        return;
    }

    if(n==2){
        cout<<9<<endl;
        return;
    }

    vector<vector <int>> a(n,vector<int>(n,0));

    int gr=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=gr;
            gr++;
        }
    }

    int res=INT_MIN;
    for(int i=n-2;i<n;i++){
        for(int j=0;j<n;j++){
            int temp=a[i][j];
            temp+=a[i-1][j];
            if(i+1<n){
                temp+= a[i+1][j];
            }
            if(j-1>=0){
                temp += a[i][j-1];
            }
            if(j+1<n){
                temp += a[i][j+1];
            }

            res=max(temp,res);
        }
    }


    cout<<res<<endl;
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