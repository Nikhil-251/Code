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
    bool isPalindrome(ListNode* head) {
        int len=0;
        ListNode* ptr = head;
        while(ptr!=NULL){
            len+=1;
            ptr = ptr->next;
        }
        
        ListNode* it = head;
        int mid = len/2; 
        stack<int>st;
        while(mid>0){
            st.push(it->val);
            it = it->next;
            mid-=1;
        }
        if(len%2!=0){
            it = it->next;
        }
        while(it!=NULL){
            int val1 = st.top();
            st.pop();
            int val2 = it->val;
            it = it->next;
            if(val1!=val2){
                return false;
            }
        }
        return true;
    }
};