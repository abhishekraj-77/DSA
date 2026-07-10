class Node{
    public:
     int val;
     Node* next;
     Node(int data){
        val = data;
        next = nullptr;
     }
};

class MyLinkedList {
    Node* head;
    Node* tail;
public:
    MyLinkedList() {
        head = tail = nullptr;
    }
    
    int get(int index) {
        Node* temp = head;
        if(index < 0){
            return -1;
        }
        if(head == nullptr){
            return -1;
        }
        for(int i=0;i<index;i++){
            if(temp->next == nullptr){
                return -1;
            }
            temp = temp ->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0){
            return;
        }
        if(index == 0){
            addAtHead(val);
            return;
        }
        if(head == nullptr){
            return;
        }
        Node* temp = head;
        for(int i=0;i<index-1;i++){
            if(temp->next == nullptr){
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode -> next = temp ->next;
        temp->next = newNode;
        if(newNode->next == nullptr){
            tail = newNode;
        }
    }
    
    void deleteAtIndex(int index) {
        if(index<0){
            return;
        }
        if(head == nullptr){
            return;
        }
        Node* temp = head;
        if(head == tail && index == 0){
            delete head;
            head = tail = nullptr;
            return;
        }

        if(index == 0){
            head = head->next;
            temp->next = nullptr;
            delete temp;
            return;
        }
        Node* prev = head;
        for(int i=0;i<index;i++){
            if(temp->next == nullptr){
                return;
            }
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete temp;
        if(prev->next == nullptr){
            tail = prev;
        }
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