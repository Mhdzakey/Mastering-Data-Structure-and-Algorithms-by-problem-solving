#include <iostream>
#include <map>
using namespace std;
class Node /* LinkedListNode */{
    public:
    int data ;
    Node * next;

    //constructor
    Node (int data){
        this->data = data;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int value = this -> data ;
        //memory free
        if(this-> next != NULL)
       { delete next;
        this -> next = NULL;
        } cout << "Free for data: " <<  value << endl;
    
    }
   
};



 // Insertion at head
    void insertATHead(Node * &head , int d){
        // new node create
        Node * temp = new Node(d);
        temp -> next = head;
        head =  temp;
    }
    

    // insertion at tail
    void insertAtTail(Node * & tail, int d){
        Node * temp = new Node(d);
        tail -> next = temp;
        tail = tail -> next;
    }

    // traversing a LL
    void print(Node* &head){
        Node * temp = head;
        while(temp != NULL)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }

    void insertAtPosition(Node* &tail,Node* &head, int position, int d){
        // insert at Start
        if(position == 1)
        {
            insertATHead(head , d);
            return;
        }
        Node * temp = head;
        int cnt = 1;
        while(cnt < position -1 ){
            temp = temp -> next;
            cnt++;
            // cout << cnt << " " << endl;
        }
        // insert at last position
        if(temp -> next == NULL)
        {
            insertAtTail(tail, d);
            return ;
        }

        // creating a node for d
        Node* nodeToInsert = new Node(d);
        nodeToInsert -> next = temp -> next;
        temp -> next = nodeToInsert;
    }
        // deleting operation on LL
        void deleteNode (int position , Node* &head){
            //deleting first or start node 
            if(position == 1){
                Node *  temp = head;
                head = head -> next;
                // memory free 
                temp -> next = NULL;
                delete temp;

            }
            else
            { 
                //deleting any middle or last node
                Node* curr = head;
                Node* prev = NULL;
                int cnt = 1;
                while(cnt < position){
                    prev = curr;
                    curr = curr -> next;
                    cnt++;
                    // cout << "values r: " << curr ->data << " " << endl;
                }
                prev -> next = curr  -> next;
                curr -> next = NULL;
                delete curr;
            }
        } 
       // detecting loop using map<>.{ Space complexity O(n) , Time Complexity is O}
        bool detectLoop(Node* head){
            
            //empty ll
            if(head == NULL)
            {
                

                return false;
            }
            map<Node* , bool> visited;
            Node* temp = head;
            
            while(temp != NULL)
            {
                // cycle detected
                if(visited[temp] == true)
                {
                    cout << "Cycle is present at data: " << temp->data << endl;
                    return true;
                }
                visited[temp] = true;
                temp = temp->next;
            }
                return false;
        }
         // Floyd's Algorithms for cycle detection { Space complexity O(1) , Time Complexity is O}
            Node* floydDetectLoop(Node* head){
                if(head == NULL)
                {
                    return NULL;
                }
                Node* slow = head;
                Node* fast = head;

                while(slow != NULL && fast != NULL)
                {
                    fast = fast->next;
                    if(fast != NULL)
                    {
                        fast = fast->next;
                    }
                    slow = slow->next;
                    if(slow == fast)
                    {
                        cout << "Cycle is present at data: " << slow->data << endl;
                        return slow;
                    }


                }
                    return NULL;


            }

        Node* getStartingNode(Node* head){
            if(head == NULL)
            {
                return NULL;

            }               
            Node* intersection = floydDetectLoop(head);
            Node* slow = head;

            while(slow != intersection)
            {
                slow = slow->next;
                intersection = intersection->next;
                
            } 
                return slow;


        }
        // remove loop from ll
        void removeLoop(Node* head){
            if(head == NULL)
                 return;

            Node* startOfLoop = getStartingNode(head);
            Node* temp = startOfLoop;

            while(temp->next != startOfLoop){
                temp =temp->next;
            }
                temp->next = NULL;
        }
        // Remove  duplicate from a sorted ll
        Node* uniqueSortedLL(Node * head){
        //empty ll
        if(head == NULL)
            return NULL;

        //non empty ll
        Node* curr = head;
        
        while(curr != NULL){

            if((curr -> next != NULL) && curr -> data == curr-> next -> data)
            {
                Node* next_next = curr->next->next;
                Node* nodeToDelete = curr-> next;
                delete(nodeToDelete);
                curr -> next = next_next;
            }
            else
            {
                //not equal
                curr = curr -> next;
            }
        }
        return head;
}
        //HomeWork
        // Remove duplicate from unsorted ll
        // O(n*2) -> Using to loops
        // O(n)   -> First sort in (nlogn) quick sort 
        // O(n)   -> map
        // Split circular linked list into two halfs











int main(){
    // created a new node
    Node * node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;
     
    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    // print(head);

    // insert at head
    // insertATHead(head, 12);
    // print(head);

    // insertATHead(head , 15);
    // print(head);
    // insertATHead(head , 22);
    // print(head);


    //insert at tail
    
    insertAtTail(tail, 12);
    // print(head);
    insertAtTail(tail, 15);
    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
   
   
    //inserting node at nth position
    // insertAtPosition(tail, head, 4, 22);
    // // print(head);
    // // insertAtPosition(tail,head, 5, 113);
    // // print(head);
    // // tail->next= head->next;
    // cout << "Tail: " << tail -> data << endl;

    //  if(detectLoop(head))
    // {
    //     cout << "Cycle is present" << endl;
    // }
    // else{
    //     cout << "Cycle is not present" << endl;

    // }
    //   if(floydDetectLoop(head) != NULL)
    // {
    //     cout << "Cycle is present" << endl;
    // }
    // else{
    //     cout << "Cycle is not present" << endl;

    // }
    // Node* getLoopNode = getStartingNode(head);
    // cout << "This is starting node " << getLoopNode->data << " of the loop" << endl;
    // removeLoop(head);
    print(head);

}