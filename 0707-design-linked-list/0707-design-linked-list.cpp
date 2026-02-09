struct Node {
    int val;
    Node* next;
    Node(int x, Node* n) {  // two-argument constructor
        val = x;
        next = n;
    }
};

class MyLinkedList {
public:
    Node* head;
    MyLinkedList() {
        head=NULL;
    }
    
    int get(int index) {
        Node* temp=head;
        int i=0;
        while(temp!=NULL && i<index){
            temp=temp->next;
            i++;
        }
        if(temp==NULL){
            return -1;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
       Node* newnode=new Node(val,head);
       head=newnode;
       return;
        
    }
    
    void addAtTail(int val) {
        Node* newnode=new Node(val, NULL);
        if(head==NULL){
            head=newnode;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    
    void addAtIndex(int index, int val) {
        if(index==0){
            Node* newnode=new Node(val,head);
            head=newnode;
            return;
        }
        Node* temp=head;
        int i=0;
        while(temp!=NULL && i<index-1){
            temp=temp->next;
            i++;
        }
        if(temp == NULL){
            return;
        }
        Node* newnode=new Node(val, temp->next);
        temp->next=newnode;

    }
    
    void deleteAtIndex(int index) {
        if(head==NULL){
            return;
        }
        if(index==0){
            Node* temp=head;
            head=head->next;
            delete temp;
            return;
        }
        Node* temp=head;
        int i=0;
        while(temp!=NULL && i<index-1){
            temp=temp->next;
            i++;
        }
        if(temp ==NULL || temp->next == NULL){
            return;
        }
        Node* del=temp->next;
        temp->next=del->next;
        delete del;
        return;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */