
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
// creating tree
Node* buildTree(Node* root){
    cout << "Enter Data: " << endl;
    int data;
    cin >> data;
    //storing data in root
    root = new Node(data);

    if(data == -1){
        return NULL;
    }
   			cout <<"Enter data in left of " <<data<< endl;
    		root->left= buildTree(root->left);
   			cout <<"Enter data in right of " << data << endl;
   			root->right= buildTree(root->right);
    		return root;
	

    

 





/*     
    if(data == -1){
        return NULL;
    };
    
    // Create Node
    Node* root = new Node(data);
    int leftData; 
    cout << "Enter left data for Tree: " << endl;
    cin >> leftData;
    root->left= buildTree(leftData);
    int rightData;
    cout << "Enter right node fot Tree: " << endl;
    cin >> rightData;
    root->right = buildTree(rightData);
    return root;

 */
}



int main(){

    Node* root = NULL;
    root = buildTree(root);


} 

