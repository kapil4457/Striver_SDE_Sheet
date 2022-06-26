// LeetCode : https://leetcode.com/problems/reverse-nodes-in-k-group/

#include <bits/stdc++.h>
using namespace std;

//   Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void reverse(ListNode *root, int start, int end)
{
    ListNode *temp1 = root;

    ListNode *helper = root;

    ListNode *temp2 = root;

    stack<int> s1;

    for (int i = 0; i < start; i++)
    {
        temp1 = temp1->next;
        helper = helper->next;
    }

    for (int i = 0; i < end; i++)
    {
        temp2 = temp2->next;
    }

    while (temp1 != temp2)
    {
        s1.push(temp1->val);
        temp1 = temp1->next;
    }

    while (helper != temp2)
    {
        int data = s1.top();
        s1.pop();
        helper->val = data;
        helper = helper->next;
    }
}

int len(ListNode *root)
{
    ListNode *temp = root;
    int len = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }

    return len;
}

ListNode *reverseKGroup(ListNode *head, int k)
{
    ListNode *temp = head;
    int length = len(head);
    int start = 0;

    while (length != (length % k))
    {
        reverse(head, start, k);
        start += k;
        k += k;
        length -= k;
    }

    return head;
}
int main()
{
    ListNode *root = new ListNode(1);
    root->next = new ListNode(2);
    root->next->next = new ListNode(3);
    root->next->next->next = new ListNode(4);
    root->next->next->next->next = new ListNode(5);
    root->next->next->next->next->next = new ListNode(6);
    root->next->next->next->next->next->next = new ListNode(7);
    root->next->next->next->next->next->next->next = new ListNode(8);

    reverseKGroup(root, 3);

    ListNode *ptr = root;

    while (ptr != NULL)
    {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }

    return 0;
}