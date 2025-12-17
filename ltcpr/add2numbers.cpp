#include <bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

/* my solution:
class solution{
    public:
    ListNode* addtwonumbers(ListNode* l1,ListNode* l2){
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* temp3=new ListNode();
        ListNode* saved=temp3;
        ListNode* prev=temp3;
        while(temp1->next!=nullptr || temp2->next!=nullptr){
            ListNode* curr=new ListNode();
            prev->next=curr;
            prev=curr;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp3=saved;
        while(temp1->next!=nullptr || temp2->next!=nullptr){
            int sum=temp1->val+temp2->val;
            if(sum<10){
                temp3->val+=sum;
                temp3=temp3->next;
            }
            else{
                temp3->val+=sum-10;
                temp3->next->val+=1;
                temp3=temp3->next;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
};*/

//solution after watching video

class solution{
    public:
    
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode();
        ListNode* res=dummy;
        int total=0;
        int carry=0;
        while(l1!=nullptr || l2!=nullptr || carry!=0){
            total=carry;//without this line there would be memory limit exceeded
            if(l1!=nullptr){
                total+=l1->val;
                l1=l1->next;
            }
            if(l2!=nullptr){
                total+=l2->val;
                l2=l2->next;
            }
            ListNode* curr=new ListNode(total%10);
            carry=total/10;
            dummy->next=curr;
            dummy=curr;
        }
        return res->next;
    }
};