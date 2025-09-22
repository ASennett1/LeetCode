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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        int val; // (Unused variable here, can be safely removed)

        // If the first list is empty, return the second list
        if (list1 == nullptr)
            return list2;

        // If the second list is empty, return the first list
        if (list2 == nullptr)
            return list1;

        // Compare the current node values of both lists
        if (list1->val <= list2->val)
        {
            // If list1's value is smaller (or equal):
            // - Keep list1 as the current node
            // - Recursively merge the rest of list1 (list1->next) with list2
            list1->next = mergeTwoLists(list1->next, list2);

            // Return list1 since itâs the smaller head
            return list1;
        }
        else
        {
            // If list2's value is smaller:
            // - Keep list2 as the current node
            // - Recursively merge list1 with the rest of list2 (list2->next)
            list2->next = mergeTwoLists(list1, list2->next);

            // Return list2 since itâs the smaller head
            return list2;
        }
    }
};
