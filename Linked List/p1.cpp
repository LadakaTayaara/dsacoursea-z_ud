#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;

    node(int val):data(val),next(nullptr){}
};

class LinkedList{
private:
    node* head;
    
public:
    LinkedList():head(nullptr){}
    ~LinkedList();

    void insertatbeginning(int data);
    void insertatend(int data);
    void deletenode(int key);
    void displaylist();
};

void LinkedList::insertatbeginning(int data){
    node* nnode=new node(data);
    nnode->next=head;
    head=nnode;
}

void LinkedList::insertatend(int data){
    node* nnode=new node(data);
    node* temp=head;
    if(head==nullptr){
        return;
    }
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=nnode;
}

void LinkedList::deletenode(int key){
    node* temp=head;
    node* curr=nullptr;
    while(temp->next!=nullptr){
        if(temp->next->data==key){
            curr=temp->next;
            temp->next=nullptr;
            curr->next=nullptr;
            delete curr;
            break;
        }
        else{
            temp=temp->next;
        }
    }
}

int main(){
    
}