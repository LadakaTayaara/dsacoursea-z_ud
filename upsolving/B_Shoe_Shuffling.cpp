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
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int i=0;

    while(i<n){
        int j=i+1;
        while(a[j]==a[i] && j<n){
            j++;
        }
        if(j==i+1){
            cout<<-1<<endl;
            return;
        }
        i=j;
    }

    i=0;
    while(i<n){
        int j=i+1;
        vector<int> prm;
        prm.push_back(i+1);
        while(a[j]==a[i] && j<n){
            prm.push_back(j+1);
            j++;
        }
        if(j==i+1){
            cout<<-1<<endl;
            return;
        }
        else{
            for(int ij=0;ij<prm.size()-1;ij++){
                swap(prm[ij],prm[ij+1]);
                cout<<prm[ij]<<" ";
            }
            cout<<prm[(prm.size())-1]<<" ";
            i=j;
        }
    }
    cout<<endl;
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