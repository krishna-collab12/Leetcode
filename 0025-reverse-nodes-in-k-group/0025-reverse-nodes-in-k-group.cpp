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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1|| head==nullptr || head->next == nullptr){
            return head ; 
        }
        ListNode* node = head ; 
        ListNode* curr = head ; 
        ListNode* prev = nullptr ; 
        ListNode* temp = nullptr ; 
        for(int i = 1 ; i<k && node!= nullptr ;i++){
            node = node->next ;
        }
        if(node == nullptr){
            return head ; 
        }
        node = node->next ; 
        for(int i = 0 ; i<k ;i++){
            temp = curr->next ;
            curr->next = prev ; 
            prev = curr ; 
            curr = temp ;
 
        }
        head-> next = reverseKGroup(node , k );
        return prev ;        
    }
};