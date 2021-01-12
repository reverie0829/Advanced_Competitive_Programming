#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
    public:
        ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
        {
            ListNode *dummyhead = new ListNode(0);
            ListNode *p1 = l1, *p2 = l2 ,*curr = dummyhead;
            int carry = 0;
            while (p1 != nullptr || p2 != nullptr)
            {
                int x = (p1!=nullptr)?p1->val:0;
                int y = (p2!=nullptr)?p2->val:0;
                int sum = x + y + carry;
                carry = sum/10;
                curr->next = new ListNode(sum%10);
                curr = curr->next;
                if (p1!=nullptr) p1=p1->next;
                if (p2!=nullptr) p2=p2->next;
            }
            if (carry > 0) curr->next = new ListNode(carry);
            return dummyhead->next;
        }
};

