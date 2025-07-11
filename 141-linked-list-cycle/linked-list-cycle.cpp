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
    bool hasCycle(ListNode *head) {
 ListNode* fast = head;
        ListNode* slow = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;           // move one step
            fast = fast->next->next;     // move two steps

            if (slow == fast) {
                return true;             // cycle detected
            }
        }

        return false; // no cycle
    }
};