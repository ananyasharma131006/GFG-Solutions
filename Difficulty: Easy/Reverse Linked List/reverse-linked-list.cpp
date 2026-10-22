/* Structure of Linked List Node
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node* prev=NULL;
        Node* cur=head;
        Node* forward=NULL;
        if(head==NULL || head->next==NULL){
            return head;
        }
        while(cur!=NULL){
            forward=cur->next;
            cur->next=prev;
            prev=cur;
            cur=forward;
        }
        return prev;
        
    }
};