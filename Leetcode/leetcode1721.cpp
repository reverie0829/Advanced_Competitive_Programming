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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> tmp;
        ListNode* tmptr=head;
        ListNode* outptr=head;
        tmp.push_back(head->val);
        head=head->next;
        while(head!=nullptr){
            tmp.push_back(head->val);
            head=head->next;
        }
        int  front=k-1,back=tmp.size()-k,put=0;
        put=tmp.at(front);
        tmp.at(front)=tmp.at(back);
        tmp.at(back)=put;
        for(int i=0;i<tmp.size();i++){
            tmptr->val=tmp.at(i);
            tmptr=tmptr->next;
        }
    return outptr;
    }
};


int main(){
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
    Solution s;
    cout<<s.minOperations(6)<<endl;
}