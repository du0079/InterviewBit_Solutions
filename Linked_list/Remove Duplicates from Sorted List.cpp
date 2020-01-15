
ListNode* Solution::deleteDuplicates(ListNode* A) {
    
    if(A == NULL){
        return A;
    }
    
    ListNode* curr;
    ListNode* temp;
    
    curr = A;
    
    while(curr->next != NULL){
        temp = curr->next;
        while(curr->val == temp->val){
            if(temp->next == NULL){
                curr->next = NULL;
                return A;
            }
            temp = temp->next;
        }
        curr->next = temp;
        curr = temp;
    }
    
    return A;
}