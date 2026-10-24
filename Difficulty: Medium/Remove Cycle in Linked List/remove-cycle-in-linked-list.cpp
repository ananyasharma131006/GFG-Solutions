/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        Node* fast=head;
        Node* slow=head;
        Node* temp=NULL;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                slow=head;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                }
                temp=slow;
                break;
            }
        }
        if(fast==NULL || fast->next ==NULL){
                return;
        }
      
        while(temp->next!=slow){
            temp=temp->next;
            
        }
        temp->next=NULL;
            
    }
};