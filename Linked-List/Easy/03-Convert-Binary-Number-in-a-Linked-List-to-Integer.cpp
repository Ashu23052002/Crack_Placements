/*

 int getDecimalValue(ListNode* head) {
        
        int len = 0;
        ListNode* temp = head;
        while(temp){
            len++;
            temp = temp->next;
        }
        
        len--;
        temp = head;
        int num = 0;
        while(temp){
            num = num + (temp->val)*pow(2,len);
            len--;
            temp = temp->next;

        }

        return num;

    }

*/