    Node* reverseList(Node*head) {
        Node*prev,*curr,*nextnode;
     prev=0; // stores the address of previous node
       curr=head; //for transversing the list
       nextnode=head; //stores the address of next node so that the link is not broken
  while(nextnode!=0){
      nextnode=nextnode->next;
      curr->next=prev;
      prev=curr;
      curr=nextnode;
  }
     return prev;

        
    }
