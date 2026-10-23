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
    // Find the first common node using pointer switching.
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
 
        // Start one pointer at each linked list.
        ListNode* first = headA;
        ListNode* second = headB;
 
        // Continue until both pointers refer to the same node.
        while (first != second) {
 
            // Move first forward; after reaching the end of list A,
            // continue from the beginning of list B.
            first = (first == nullptr) ? headB : first->next;
 
            // Move second forward; after reaching the end of list B,
            // continue from the beginning of list A.
            second = (second == nullptr) ? headA : second->next;
        }
 
        // Both pointers either meet at the intersection node
        // or become nullptr when no intersection exists.
        return first;
    }
};