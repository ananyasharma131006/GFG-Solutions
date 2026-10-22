/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    bool isCircular(Node *head) {
        // code here
        Node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            if(temp==head){
                return true;
            }
        }
        return false;
        
    }
};