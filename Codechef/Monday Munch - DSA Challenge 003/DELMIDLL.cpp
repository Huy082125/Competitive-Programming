// struct Node {
//     int data;
//     Node* next;
//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

void printList(Node *head) {
    Node *temp=head;
    if (temp==NULL) cout << -1;
    else {
        while (temp!=NULL) {
            cout << temp->data << " ";
            temp=temp->next;
        }
    }
}

Node* deleteMiddle(Node* head) {
    //write code here...
    if (head==NULL||head->next==NULL) return NULL;
    Node *slow=head;
    Node *fast=head;
    Node *pre=NULL;
    while (fast!=NULL&&fast->next!=NULL) {
        pre=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    pre->next=slow->next;
    delete slow;
    return head;
}