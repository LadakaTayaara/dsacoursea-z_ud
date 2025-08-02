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

void append(struct Array *arr,int x){
    if(arr->length < arr->size)
    arr->A[arr->length++]=x;//these arrows are the same thing as using dots to access inside structure
}

void insert(struct Array *arr,int index,int x){
    int i;
    if(index>=0 && index<=arr->length){
        for(i=arr->length;i>index;i--)
        arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}

int deleteElement(struct Array *arr,int index){
    if(index>=0 && index<arr->length){
        int x=arr->A[index];
        for(int i=index;i<arr->length-1;i++)
            arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
}

int main(){
    struct Array arr={{2,3,4,5,6},10,5};
    insert(&arr,5,10);
    display(arr);
    printf("\n%d\n",deleteElement(&arr,0));
    display(arr);
    return 0;
}
