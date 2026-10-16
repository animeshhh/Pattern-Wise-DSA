/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)return head;
        ListNode* even=NULL;
        ListNode* odd=NULL;
        ListNode* dummy=NULL;
        ListNode* temp=head;
        bool flag=true;
        while(temp){
            ListNode* nextNode=temp->next;
            if(flag){
                if(even==NULL){
                    even=temp;
                }
                else{
                
                even->next=temp;
                even=even->next;
                }
            }
            else{
                if(dummy==NULL){
                    dummy=temp;
                    odd=temp;
                }
                else{
                odd->next=temp;
                odd=odd->next;
                }
            }
            temp=nextNode;
            flag=!flag;
        }
        even->next=dummy;
        if(odd){
        odd->next=NULL;
        }
        return head;
    }
};