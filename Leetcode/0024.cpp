#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long


//Definition for singly-linked list.
//struct ListNode {
    //int val;
    //ListNode *next;
    //ListNode() : val(0), next(nullptr) {}
    //ListNode(int x) : val(x), next(nullptr) {}
    //ListNode(int x, ListNode *next) : val(x), next(next) {}
//};

class Solution {
    public:
        ListNode* swapPairs(ListNode* head) {
            ListNode* dummyHead = new ListNode(0);
            dummyHead->next = head;
            ListNode* scan = dummyHead;
            while(scan->next !=nullptr and scan->next->next !=nullptr){
                ListNode* left = scan->next;
                ListNode* right = scan->next->next;
                scan->next = right;
                left->next = right->next;
                right->next = left;
                scan = left;
            }
            return dummyHead->next;
        }
};

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}
