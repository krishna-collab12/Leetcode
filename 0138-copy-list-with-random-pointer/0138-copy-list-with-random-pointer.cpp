/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr){
            return nullptr ; 
        } 
        Node *ans = new Node(head->val);
        Node *abc = ans;
        head->val = 0 ;
        Node *node = head->next ;
        int i = 1 ; 
        while(node!= nullptr){
            abc->next = new Node(node->val);
            node->val = i ;
            i++ ; 
            node = node->next ; 
            abc = abc->next ; 
        }
        node = head ; 
        abc = ans ; 
        while(node!= nullptr){
            if(node->random == nullptr ){
                abc->random = nullptr ; 
            }
            else{
                int k = node->random->val ;
                Node* temp = ans ;
                for(int i = 0 ; i < k ; i++ ){
                    temp = temp->next ; 
                }
                abc->random = temp ; 
            } 
            abc = abc->next ; 
            node = node->next ;        
        }
        return ans ; 
    }
};