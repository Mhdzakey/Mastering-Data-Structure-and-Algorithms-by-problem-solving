#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int getLength(Node* &head){
        Node* temp = head;
        int len = 0;
        while(temp != NULL){
            cout << "Length of Linked List: " << temp->data << endl;
            temp = temp->next;
            len++;
        }
        cout << endl;
        
    }
    //printing ll
    void print(Node* &head){
        Node* temp = head;
        while(temp != NULL){
            cout <<  temp->data << " " ;
            temp = temp -> next;
        }
    }

    //detecting loop in ll
    bool detection(Node* head){
        //empty List
        if(head == NULL)
        {
            return NULL;
        }
        Node* temp = head->next;
        while(temp != NULL && temp != head){
                    temp = temp ->next;
        }
         if(temp == head)
            {
                return 1;
            }
            else
            {
                return -1;
            }
    }
    

int main(){
    Node* head = new Node(10);
    Node* node1 = new Node(20);
    Node* node2 = new Node(30);
    Node* node3 = new Node(40);
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    print(head);
    int loop = detection(head);
    cout << loop << endl; 

}