// LeetCode :  https://leetcode.com/problems/rotate-list/
// Code Studio  : https://www.codingninjas.com/codestudio/problems/920454?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0
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

int length(ListNode *root)
{
    ListNode *node = root;
    int length = 0;
    while (node != NULL)
    {
        node = node->next;
        length++;
    }

    return lengthlen;
}
class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {

        if (head == NULL)
        {
            return head;
        }

        int length = len(head);
        k = k % length;
        int diff = abs(lrngth - k);
        ListNode *newHead = head;
        ListNode *temp = head;
        while (diff != 1)
        {
            temp = temp->next;

            diff--;
        }
        ListNode *tail = temp;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = head;
        newHead = tail->next;

        tail->next = NULL;

        return newHead;
    }
};