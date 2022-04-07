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
    ListNode* deleteMiddle(ListNode* head) {
        int len=0;
        ListNode* ptr = head;
        if(head==NULL) return head;
        if(head->next==NULL)return NULL;
        
        while(ptr!=NULL){
            len+=1;
            ptr = ptr->next;
        }
        
        int mid = len/2;
        ListNode* curr=head;
        ListNode* prev=NULL;
        int currnode=0;
        while(curr!=NULL){
            if(currnode==mid){
                prev->next = curr->next;
                curr->next = NULL;
                return head;
            }
            prev = curr;
            curr = curr->next;
            currnode+=1;
        }
        return head;
    }
};