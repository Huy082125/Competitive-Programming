//struct Node {
//    int data;
//    Node* next;
//    Node(int val) {
//        data = val;
//        next = NULL;
//    }
//};
Node* addTwoNumbers(Node* l1, Node* l2) {
    //write code here...
    Node *dummy=new Node(0);
    Node *tail=dummy;
    int carry=0;
    while (l1!=NULL||l2!=NULL||carry!=0) {
        int x=(l1!=NULL)?l1->data:0;
        int y=(l2!=NULL)?l2->data:0;
        int sum=x+y+carry;
        int digit=sum%10;
        carry=sum/10;
        tail->next=new Node(digit);
        tail=tail->next;
        if (l1!=NULL) l1=l1->next;
        if (l2!=NULL) l2=l2->next;
    }
    return dummy->next;
}