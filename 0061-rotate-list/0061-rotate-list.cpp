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
    ListNode* rotateRight(ListNode* head, int k) {
        int count = 0 ; 
        ListNode* node = head ;
        if(node == nullptr)
            return head ; 
        else count++ ;
        while(node->next!=NULL){
            node = node->next ;
            count++ ; 
        }
        k = k%count ; 
        k = count-k ; 
        node->next = head ; 
        for(int i=0 ; i< k ; i++ ){
            node = node->next ; 
        }
        head = node->next ; 
        node->next = nullptr ; 
        return head ; 
    }
};