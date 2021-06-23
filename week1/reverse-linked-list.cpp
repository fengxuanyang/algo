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
    ListNode* reverseList(ListNode* head) {
        ListNode  *last_node = nullptr;
        ListNode *current_node = head;
        while(current_node != nullptr) {
            ListNode *temp  = current_node->next;
            current_node->next = last_node;
            last_node = current_node;
            current_node = temp;
        }
        return last_node;

    }
};