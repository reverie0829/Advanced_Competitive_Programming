#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

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

class Solution {
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode* dummyHead = new ListNode(0);
            dummyHead->next = head;

            ListNode* left = dummyHead;
            ListNode* right = dummyHead;
            for(int i=0;i<n+1;++i){
                right=right->next;
            }
            while(right!=nullptr){
                left=left->next;
                right=right->next;
            }
            ListNode* delNode = left->next;
            left->next = delNode->next;
            delete delNode;

            return dummyHead->next;
        }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}
