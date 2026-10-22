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

// Optimal Approach
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* fast = head;
    ListNode* slow = head;

    for(int i = 0; i < n; i++){
        fast = fast->next;
    }
    if(fast == nullptr) return head->next;
    while(fast->next != nullptr){
        fast = fast->next;
        slow = slow->next;
    }
    ListNode* delNode = slow->next;
    slow->next = slow->next->next;
    delete delNode;

    return head;
}
// Brute force
 /*
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if (head == nullptr) {
            return nullptr;
        }
        ListNode* temp = head;
        ListNode* beforeTemp = temp;
        int size = 0;
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }
        temp = head;
        int toRemove = size - n + 1;
        if (toRemove == 1) {
            head = head->next;
            delete temp;
            return head;
        }
        for (int i = 1; i < toRemove; i++) {
            if (temp == nullptr)
                return head;
            beforeTemp = temp;
            temp = temp->next;
        }
        beforeTemp->next = temp->next;
        delete temp;
        return head;
    }
 */
};