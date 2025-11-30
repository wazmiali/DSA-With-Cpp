// Code 360 Ninjas
// Middle of Linked List
int getLength(Node *head){

    int len = 0;
    while(head != NULL){
        
        len++;

        head = head -> next;
    }
    return len;
}
// Middle Node
Node* findMiddle(Node * head){
    int len = getLength(head);
    int ans =(len/2);

    Node* temp = head;
    int cnt = 0;

    while(cnt < ans){
        temp = temp -> next;
        cnt++;        
    }

    return temp;
}
