ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    map<int, int> myMap;
    
    for(int i = 0; i < A.size(); i++){
        ListNode* curr = A[i];
        while(curr != NULL){
            int temp = curr->val;
            if(myMap.find(temp) != myMap.end()){
                myMap[temp]++;
            }
            else{
                myMap[temp] = 1;
            }
            curr = curr->next;
        }
    }
    
    auto it = myMap.begin();
    
    ListNode* head = NULL;
    ListNode* curr = NULL;
    
    while(it != myMap.end()){
        while(it->second != 0){
            ListNode* list = new ListNode(it->first);
            if(head == NULL){
                head = list;
                curr = list;
            }
            else{
                curr->next = list;
                curr = curr->next;
            }
            it->second--;
        }
        it++;
    }
    
    return head;
    
}