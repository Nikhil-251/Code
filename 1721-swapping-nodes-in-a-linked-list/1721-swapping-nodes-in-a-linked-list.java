/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapNodes(ListNode head, int k) {
        ListNode firstn = head;
        k = k -1;
        while(k>0){
            firstn = firstn.next;
            k-=1;
        }
        
        ListNode f = firstn;
        ListNode secondn = head;
        while(f.next!=null){
            secondn = secondn.next;
            f = f.next;
        }
        
        int temp = firstn.val;
        firstn.val = secondn.val;
        secondn.val = temp;
        
        return head;
    }
}