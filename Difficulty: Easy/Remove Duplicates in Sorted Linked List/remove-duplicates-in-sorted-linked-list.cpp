/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // code here
        Node* cur=head;
        while(cur!=NULL && cur->next!=NULL){
            if(cur->data==cur->next->data){
                Node* temp=cur->next;
                cur->next=cur->next->next;
                delete temp;
            }
            else{
                cur=cur->next;
            }
        }
        return head;
    }
};