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
    ListNode *merge(ListNode*head1 , ListNode*head2){
        ListNode *left = head1 ;
        ListNode *right = head2 ;
        ListNode *ans = nullptr ;
        ListNode *start = nullptr ;
        if( (left->val) > (right->val) ){
            ans = right ;
            start = right ;
            right = right->next ;
            ans->next = nullptr ; 
        }
        else{
            ans = left ;
            start = left ;
            left = left->next ;
            ans->next = nullptr ;  
        }        
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
        return start ; 
    }
    ListNode* mergesort( ListNode*head){
        ListNode *slow = head ;
        ListNode *prev = head ;
        ListNode *fast = head ; 
        while(fast != nullptr && fast->next != nullptr){
            prev = slow ; 
            slow = slow->next ; 
            fast = fast->next->next ; 
        }
        if(slow == fast ){
            return head; 
        }
        prev->next = nullptr ; 
        head = mergesort(head);
        slow = mergesort(slow);
        return merge(head , slow );
    }
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr ){
            return head ; 
        }
        return mergesort(head);
    }
};