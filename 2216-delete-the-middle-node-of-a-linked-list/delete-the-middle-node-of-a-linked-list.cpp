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
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        int size = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }

        temp = head;

        // Stop at the node before the middle
        for (int i = 1; i < size / 2; i++) {
            temp = temp->next;
        }

        ListNode* middle = temp->next;
        temp->next = middle->next;
        delete middle;

        return head;
    }
};
