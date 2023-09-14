#include <iostream>
using namespace std;
// iteratively Solution of reversing a Linked List
Node* reverseLinkedList(Node *head){
    if(head == Null || head -> next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while (curr != NULL)
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;;
    }
        return prev;
    
}
int main(){

}