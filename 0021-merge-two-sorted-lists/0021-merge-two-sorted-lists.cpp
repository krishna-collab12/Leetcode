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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *left = list1 ;
        ListNode *right = list2 ;
        ListNode *ans = new ListNode(-101);
        ListNode *start = ans;
        while( left!= nullptr && right!= nullptr ){
            if((left->val) > (right->val) ){
                ans->next = right ;
                right = right->next;
                ans = ans->next ;
                ans->next = nullptr ; 
            }
            else{
                ans->next = left ;
                left = left->next;
                ans = ans->next ;
                ans->next = nullptr ; 
            }
        }
        if( left!= nullptr ){
            ans->next = left ;
        }
        if(right!= nullptr ){
            ans->next = right ;
        }
        start = start->next ;
        return start ; 
        
    }
};