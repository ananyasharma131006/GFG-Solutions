/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int cycleStart(Node* head) {
        // code here
        Node* slow=head;
        Node* fast=head;
        Node* temp=NULL;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                temp=fast;
                break;
            }
        }
        //case for no loop
        if(fast==NULL || fast->next ==NULL){
            return -1;
        }
        slow=head;
        while(slow!=temp){
            temp=temp->next;
            slow=slow->next;
        }
        return slow->data;
        
    }
};