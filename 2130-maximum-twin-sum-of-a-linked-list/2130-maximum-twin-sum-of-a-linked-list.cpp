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
    int pairSum(ListNode* head) {
        if(head==NULL)return 0;
        ListNode* ptr = head;
        int len=0;
        while(ptr!=NULL){
            len+=1;
            ptr = ptr->next;
        }
        
        ListNode* itr=head;
        int sum=0,n=len/2;
        stack<int>st;
        while(n>0){
            st.push(itr->val);
            itr = itr->next;
            n-=1;
        }
        
        while(itr!=NULL){
            int val1 = st.top();
            st.pop();
            int val2 = itr->val;
            itr = itr->next;
            if(sum< (val1 + val2)){
                sum = val1 + val2;
            }
        }
        return sum;
    }
};