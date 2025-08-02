#include <stdio.h>
#include <stdlib.h>

struct Array{
    int A[20];
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

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int LinearSearch(struct Array *arr,int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
    return -1;
}

int main(){
    struct Array arr1={{2,3,4,5,6},10,5};
    printf("\n%d\n",LinearSearch(&arr1,4));
    display(arr1);
    return 0;
}
