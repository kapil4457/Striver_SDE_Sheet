// LeetCode : https://leetcode.com/problems/middle-of-the-linked-list/
// Code Studio : https://www.codingninjas.com/codestudio/problems/973250?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0
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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *first = head;
        ListNode *second = head;
        while (first != NULL && first->next != NULL)
        {
            second = second->next;
            first = first->next->next;
        }
        return second;
    }
};