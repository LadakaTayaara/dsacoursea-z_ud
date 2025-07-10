#include <stdio.h>

int exp(int m,int n){
    if (n==0){
        return 1;
    }
    return exp(m,n-1)*m;
}