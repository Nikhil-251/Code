/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        ListNode* l1 = head1;
        ListNode* l2 = head2;
        int c1=0,c2=0;
        while(l1!=NULL){
            c1+=1;
            l1 = l1->next;
        }
        while(l2!=NULL){
            c2+=1;
            l2 = l2->next;
        }
        
        l1 = head1;
        l2 = head2;
        
        while(c1>c2){
            c1-=1;
            l1 = l1->next;
        }
        
        while(c2>c1){
            c2-=1;
            l2 = l2->next;
        }
        
        while(l1!=NULL && l2!=NULL){
            if(l1==l2){
                return l1;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        return NULL;
    }
};