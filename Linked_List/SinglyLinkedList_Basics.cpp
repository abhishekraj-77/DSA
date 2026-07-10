#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int val;
     Node*  next;
     Node(int data){
        val = data;                                 
        next = nullptr;
     }
};

class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head = tail = nullptr;
    }
    
    void push_back(int data){
        Node* newNode = new Node(data);
        if(head == nullptr){
            head = tail = newNode;
        }else{
           tail->next = newNode;
           tail = newNode;
        }
    }

    void push_front(int data){
        Node* newNode = new Node(data);
        if(head == nullptr){
            head = tail = newNode;
        }else{
            newNode -> next = head;
            head = newNode;
        }
    }


    void pop_back(){
      Node* temp = head;
      if(head == nullptr){
        cout << "Empty list";
        return;
      }
      if(head == tail ){
        delete head;
        head = tail = nullptr;
        return;
      }
      while(temp->next != tail){
        temp = temp->next;
      }
      delete tail;
      tail = temp;
      temp->next = nullptr;
    }


    void pop_front(){
        Node* temp = head;
        if(head == nullptr){
            cout << "List is empty" << endl;
            return;
        }
        head = head->next;
        temp->next = nullptr;
        if(head == nullptr){
            tail = nullptr;
        }
        delete temp;
    }

    void insert_from_front(int val, int index){
        if(index < 0){
            cout << "Invalid Index" << endl;
            return;
        }
        if(index == 0){
            push_front(val);
            return;
        }
        if(head == nullptr){
            cout << "Not possible to insert" << endl;
            return;
        }
        Node* temp = head;
        for(int i=0;i<index-1;i++){
            if(temp->next == nullptr){
                cout << "Invalid index" << endl;
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode ->next = temp ->next;
        temp->next = newNode;
        if(newNode->next == nullptr){
            tail = newNode;
        }
    }

    
    void printll(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};
int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_front(-1);
    ll.printll();
    ll.pop_back();
    ll.pop_front();
    cout << endl;
    ll.printll();
    return 0;
}