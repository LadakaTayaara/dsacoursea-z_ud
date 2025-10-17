#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*first=NULL;//for implementing the linked list

void create(int a[],int n){
    struct node *t,*last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

void recdisplay(struct node *p){
    if(p!=NULL){
        printf("%d ",p->data);
        display(p->next);
    }
}

int count(struct node *p){
    int l=0;
    while(p){
        l++;
        p=p->next;
    }
    return l;
}

int Rcount(struct node *p){
    if(p!=NULL){
        return Rcount(p->next)+1;
    }
    else{
        return 0;
    }
}

int sum(struct node *p){
    int sum=0;
    while(p){
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

int Rsum(struct node *p){
    if(p==NULL){
        return 0;
    }
    else{
        return Rsum(p->next)+p->data;
    }
}

int max(struct node *p){
    int x=0;
    if(p==0){
        return x;
    }
    else{
        x=max(p->next);
        if(x>p->data){return x;}
        else{return p->data;}
    }
}

int Rmax(struct node *p){
    int x;
    if(p == NULL){
        return -32768;
    }
    x = Rmax(p->next);
    return (x > p->data) ? x : p->data;
}

int main(){
    int a[]={3,5,7,10,15};
    create(a,5);
    recdisplay(first);
    printf("length: %d\nSum: %d\nMax %d",Rcount(first),Rsum(first),Rmax(first));
    return 0;
}