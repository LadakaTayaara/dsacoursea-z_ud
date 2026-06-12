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

bool isPrime(int n) {
    // 0 and 1 are not prime numbers
    if (n <= 1) return false;
    
    // 2 and 3 are prime
    if (n <= 3) return true;
    
    // Skip even numbers and multiples of 3
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    // Check divisors from 5 up to sqrt(n)
    // All primes are of the form 6k ± 1
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    
    return true;
}

void solve() {
    ll d;
    cin >> d;
    ll num1=1+d;

    while(!isPrime(num1)){
        num1++;
    }

    ll num2=num1+d;
    while(!isPrime(num2)){
        num2++;
    }

    cout<<min(num1*num1*num1,num1*num2)<<endl;;
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