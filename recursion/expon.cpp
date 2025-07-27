#include <iostream>
using namespace std;

int exp(int m,int n){
    if (n==0){
        return 1;
    }
    return exp(m,n-1)*m;
}

int main(){
    int a=exp(5,3);
    cout<<a<<"\n";
    return 0;
}