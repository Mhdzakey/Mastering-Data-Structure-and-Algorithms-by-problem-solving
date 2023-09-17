#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
    // Inserting at head 
    void insertAtHead(Node* &head , int data){
        Node* temp = new Node(data);
        temp ->next = head;
        head = temp;
    }

    // traversing
    void print(Node* &head){
        Node* temp = head;
        while(temp != NULL){
            cout << temp ->data << " ";
            temp = temp ->next;
        }
        cout << endl;
    }
    // Inserting at tail
    void insertAtTail(Node* &tail , int data){
        // creating temp node 
        Node* temp = new Node(data);
        tail ->next = temp;
        tail = tail ->next;
    }
    // inserting at position
    void insertAtPosition(Node* & tail , Node* & head, int position, int d){
        // insert at start
        if(position == 1){
            insertAtHead(head , d);
            return;
        }
        Node* temp = head;
        int cnt = 1;
        while(cnt < position - 1){
            temp = temp ->next;
        }
        //insert at last position
        if(temp ->next = NULL)
        {
            insertAtTail(tail,d);
            return;
        }

        // creating a node for data
        Node* nodeToInsert = new Node(d);
              nodeToInsert ->next = temp ->next;
              temp ->next = nodeToInsert; 



    }

int main(){
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node* node1 = new Node(10);

    Node* head = node1;
    
    Node* tail = node1;
    
/*     insertAtHead(head, 12);
    insertAtHead(head, 14);
    insertAtHead(head, 15);
    print(head); */
    insertAtTail(tail, 12);
    insertAtTail(tail, 14);
    insertAtTail(tail, 15);
    // print(head);

    insertAtPosition(tail,head, 2 ,99);
    print(head);
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

     
}