// LeetCode : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Code Studio : https://www.codingninjas.com/codestudio/problems/799912?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

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

int len(ListNode *root)
{
    ListNode *node = root;
    int len = 0;

    while (node != NULL)
    {
        len++;
        node = node->next;
    }

    return len;
}
class Solution
{
public:
    // Time Complexity : O(m+n)

    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int pos = len(head) - n;
        ListNode *node = head;

        if (pos == 0)
        {
            head = head->next;
            return head;
        }

        for (int i = 0; i < pos - 1; i++)
        {
            node = node->next;
        }

        node->next = node->next->next;

        return head;
    }
};