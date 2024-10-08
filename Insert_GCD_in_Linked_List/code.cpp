#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {
        if (head->next == NULL)
            return head;
        ListNode *ans = head;
        while (head->next)
        {
            int x = __gcd(head->val, head->next->val);
            ListNode *temp = new ListNode(x);
            temp->next = head->next;
            head->next = temp;
            head = temp->next;
        }
        return ans;
    }
};