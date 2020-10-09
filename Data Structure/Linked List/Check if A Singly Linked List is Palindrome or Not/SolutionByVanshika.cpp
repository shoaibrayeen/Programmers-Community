void isPalindrome(Node* head) {
        Node*temp=head;
        string s1="";
        while(temp!=0){
            s1+=temp->val;;
            temp=temp->next;
        }
        int l=s1.size();
        for(int i=0;i<l/2;i++)
        {
            if(s1[i]!=s1[l-1-i]){
                cout << "NO" << endl;
                return;
                             }
        }
           cout << "YES" << endl;
    }
      
    
