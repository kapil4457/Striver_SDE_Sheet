// LeetCode  : https://leetcode.com/problems/palindrome-linked-list/
// Code Studio : https://www.codingninjas.com/codestudio/problems/799352?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0
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
    bool isPalindrome(ListNode *head)
    {
        stack<int> s1;

        ListNode *temp1 = head;
        ListNode *temp2 = head;

        while (temp1 != NULL)
        {
            s1.push(temp1->val);
            temp1 = temp1->next;
        }

        while (!s1.empty())
        {
            int data = s1.top();
            if (data != temp2->val)
            {
                return false;
            }
            s1.pop();
            temp2 = temp2->next;
        }

        return true;
    }
};