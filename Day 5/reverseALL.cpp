// LeetCode : https://leetcode.com/problems/reverse-linked-list/
//  Code Studio :https://www.codingninjas.com/codestudio/problems/799897?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

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

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        ListNode *b = NULL, *c = NULL;

        while (head != NULL)
        {
            c = b;
            b = head;
            head = head->next;
            b->next = c;
        }
        return b;
    }
};