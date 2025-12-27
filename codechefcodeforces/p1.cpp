#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int m;
    cin>>n>>m;
    int temp=0;
    while(temp!=m && n>0){
        n--;
        temp++;
    }
    cout<<n;
}