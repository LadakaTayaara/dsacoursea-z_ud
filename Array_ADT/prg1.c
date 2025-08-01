#include <stdio.h>
#include <stdlib.h>

struct Array{
    int *A;
    int size;
    int length;
};

void display(struct Array arr){
    printf("[");
    for(int i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
    printf("]");
}

int main(){
    struct Array arr;
    printf("Enter size\n");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));//initializes in heap , length of the array is now dynamic
    arr.length=0;

    int n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr.A[i]);
    }
    
    arr.length=n;
    display(arr);
}
