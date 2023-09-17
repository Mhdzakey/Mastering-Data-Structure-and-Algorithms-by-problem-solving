#include <iostream>
using namespace std;
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
        // get starting node of the loop
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
        // removing loop from ll
        void removeLoop(Node* head){
            if(head == NULL) return false;
            Node* startOfLoop = getStartingNode(head);
            Node* temp = startOfLoop;
        }
int main()
{
     if(detectLoop(head))
    {
        cout << "Cycle is present" << endl;
    }
    else{
        cout << "Cycle is not present" << endl;

    }
      if(floydDetectLoop(head) != NULL)
    {
        cout << "Cycle is present" << endl;
    }
    else{
        cout << "Cycle is not present" << endl;

    }
    Node* getLoopNode = getStartingNode(head);
    cout << "This is starting node " << getLoopNode->data << " of the loop" << endl;


}