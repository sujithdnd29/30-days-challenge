#include<bits/stdc++.h>
using namespace std;
 ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL;
        ListNode *temp=head;
        while(temp!=NULL){
           ListNode *front=temp->next;
           temp->next=prev;
           prev=temp;
           temp=front;
        }
        return prev;
    }