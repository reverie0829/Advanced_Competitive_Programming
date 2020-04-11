/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *newhead = NULL;
        ListNode *tail = NULL;
        if (l1 == NULL)
            return l2;
        else if (l2 == NULL)
            return l1;
        else
        {
            if (l1->val < l2->val)
            {
                newhead = l1;
                l1 = l1->next;
            }
            else
            {
                newhead = l2;
                l2 = l2->next;
            }
            tail = newhead;
            while (l1 && l2)
            {
                if (l1->val <= l2->val)
                {
                    tail->next = l1;
                    l1 = l1->next;
                }
                else
                {
                    tail->next = l2;
                    l2 = l2->next;
                }
                tail = tail->next;
            }
            if (l1 == NULL)
                tail->next = l2;
            else if (l2 == NULL)
                tail->next = l1;
        }
        return newhead;
    }
};