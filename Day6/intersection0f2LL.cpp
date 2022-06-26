// LeetCode : https://leetcode.com/problems/intersection-of-two-linked-lists/
// Code Studio : https://www.codingninjas.com/codestudio/problems/630457?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

int len(ListNode *root)
{
    int length = 0;
    ListNode *temp = root;

    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }

    return length;
}
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        int len1 = len(headA);
        int len2 = len(headB);

        if (len1 > len2)
        {
            while (len1 != len2)
            {
                len1--;
                headA = headA->next;
            }
        }
        else
        {
            while (len2 != len1)
            {
                len2--;
                headB = headB->next;
            }
        }

        while (headA != NULL && headB != NULL)
        {
            if (headA == headB)
            {
                return headA;
            }

            headA = headA->next;
            headB = headB->next;
        }

        return NULL;
    }
};