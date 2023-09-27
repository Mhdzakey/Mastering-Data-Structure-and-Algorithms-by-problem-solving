#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
// creating tree recursively
Node* buildTree(Node* root){
    cout << "Enter Data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout <<"Enter data for left: " <<data << endl;
    root->left= buildTree(root->left);
    cout <<"Enter data for right: " << data << endl;
    root->right= buildTree(root->right);
    return root;
}

// Level order tranversal
void levelOrderTraversal(Node* root){ 
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		Node* temp = q.front();
					 q.pop();
		if(temp ==NULL){ // previous level is traversed
			cout << endl;
			if(!q.empty()){//queue still have some child nodes
				q.push(NULL);
			}
		}
		else{
			cout << temp->data << " ";
			if(temp->left){
			q.push(temp->left);}
			if(temp->right){
			q.push(temp->right);
		}
			
		}
	}
}
void inOrder(Node* root){
	//base case
	if(root == NULL){
		return ;
	}
	
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
	
	
}
void preOrder(Node* root){
	//base case
	if(root == NULL){
		return;
	}
	
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
	
}
void postOrder(Node* root){
	//base case
	if(root == NULL){
		return;
	}
	

	preOrder(root->left);
	preOrder(root->right);
	cout << root->data << " ";
	
}

int main(){

    Node* root = NULL;
    
	root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Level Order Traversal: " << endl;
	levelOrderTraversal(root);
        
    
    // In order 
     cout << "In Order Traversal: " << endl;
    inOrder(root);
    cout<<endl;
    cout <<endl;
    // Pre Order
     cout << "Pre Order Traversal: " << endl;
    preOrder(root);
	cout<<endl;
    cout <<endl;
	// Post Order
	 cout << "Post Order Traversal: " << endl;
	postOrder(root);







} 
