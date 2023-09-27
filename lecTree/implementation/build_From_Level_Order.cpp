#include <iostream>
#include <queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data =d;
        this->left =NULL;
        this->right =NULL;
    }
};
Node* buildTree(Node* root){
    cout <<"Enter the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    if(data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for inserting in left " << data<< endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting in right " << data << endl;
    root->right = buildTree(root->right);
    return root;

}

void levelOrderTraversal(Node* root){
/*     //using queue
    queue<Node*> q;
    
    //pushing root to Queue
    q.push(root);

    //traversing Queue

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
*/
    // Using Selector to print in pyramid style
    //using queue
    queue<Node*> q;

    
    //pushing root to Queue
    q.push(root);
    q.push(NULL);


    //traversing Queue

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();


           if(temp= NULL){ // old level complete traversed 
                cout << endl;
                if(!q.empty()){ //queue still has some nodes
                    q.push(NULL);
            }
        }
            else
            {
                cout << temp->left << " " << endl;
                if(temp->left){
                q.push(temp->left);
        }
                if(temp->right){
                q.push(temp->right);
            }

        }
    }
} 
void buildFromLevelOrder(Node* &root){
    queue<Node*> q;
    cout << "Enter Data: " ;
    int data;
    cin >> data;

    root = new Node(data);
    q.push(root);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout << "Enter left node for " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(temp->data != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }
        cout << "Enter right node for " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(temp->data != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
    
}
Node* maxHeight(Node* &root){
	//base case
	if(root == NULL){
		return 0;
	}
	
	Node* left = maxHeight(root->left);
	Node* right = maxHeight(root->right);
	
	Node* ans = max(left , right) + 1;
	return ans;
}

int main(){

    Node* root = NULL;

    //creating a tree

    root = buildTree(root);
    //Level order traversal
    
    // 1 3 7 -1 -1 11 -1 -1 5 17  -1 -1 -1
//    buildFromLevelOrder(root);
//    levelOrderTraversal(root);
	buildTree(root);
    maxHeight(root);
} 
