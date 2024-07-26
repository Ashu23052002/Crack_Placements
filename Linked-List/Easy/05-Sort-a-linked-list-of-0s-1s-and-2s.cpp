/*

Node* segregate(Node *head) {
        
       int z=0,o=0,t=0;
       Node* curr = head;
       while(curr){
           int d = curr->data;
           if(d==0)z++;
           else if(d==1)o++;
           else t++;
           curr = curr->next;
       }
       curr = head;
       while(curr){
           while(z){
               curr->data = 0;
               z--;
               curr = curr->next;
           }
           while(o){
               curr->data = 1;
               o--;
               curr = curr->next;
           }
           while(t){
               curr->data = 2;
               t--;
               curr = curr->next;
           }
       }
       
       return head;
        
    }

*/