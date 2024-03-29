#include <iostream>
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
    bool isIdentical(Node* root1, Node* root2){
        // Base Case
        if(root1 == NULL && root2){
            return true;
        }

        if(root1 == NULL && root2 != NULL){
            return false;
        }

        if(root1 != NULL && root2 == NULL){
            return false;
        }

        bool left = isIdentical(root1->left, root2->left);
        bool right = isIdentical(root1->right, root2->right);

        bool value = root1->data == root2->data;

        if(left && right && value){
            return true;
        }
        else{
            return false;
        }
    }