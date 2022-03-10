
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if(head==null || head.next==null){
            return head;
        }
        
        ListNode dummy = new ListNode(Integer.MIN_VALUE);
        
        ListNode curr = head;
        ListNode itr = dummy;
        
        while(curr!=null){
            while(curr!=null && (curr.val== itr.val)){
                curr = curr.next;
            }
            
            itr.next = curr;
            itr = itr.next;
            if(curr!=null)
                curr = curr.next;
        }
        return dummy.next;
    }
}