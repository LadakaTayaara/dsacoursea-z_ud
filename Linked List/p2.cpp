#include <bits/stdc++.h>
using namespace std;

template <typename T> T cusmax(T x,T y){
    if(x>=y){
        return x;
    }
    else{
        return y;
    }
}

template <typename T> class test{
    public:
    T x;
    T y;

    void showvar(T x){
        cout<<x;
    }
    test(T val1,T val2):x(val1),y(val2);
};

int main(){
    cout<<cusmax<int>(3,4);//function template;
    test<int> a(3,4);
}