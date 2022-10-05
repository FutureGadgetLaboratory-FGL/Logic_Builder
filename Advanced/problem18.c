void sort(struct ListNode* head){
    struct ListNode* current;
    struct ListNode* temp;
    int swap;
    for(current = head ; current != NULL ; current = current->next){
        for(temp = current->next ; temp != NULL ; temp = temp->next){
            if(current->val > temp->val){
                swap = current->val;
                current->val = temp->val;
                temp->val = swap;
            }
        }
    }
}

/* create new node and insert data */
struct ListNode* newNode(int num){
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = num;
    return node;
}

/* This function must have a call */
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize){
    struct ListNode* head = NULL;
    struct ListNode* current = NULL;
    int i;
    for(i=0 ; i<listsSize ; i++){
        while(lists[i] != NULL){
            struct ListNode* temp = newNode(lists[i]->val);
            if(head == NULL){
                head = temp;
                current = head;
                current->next = NULL;
            }
            else{
                temp->next = NULL;
                current->next = temp;
                current = current->next;
            }
            lists[i] = lists[i]->next;
        }
    }
    sort(head);
    return head;
}
