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
};