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
/*
        Brute Force

     //Function to find height of a binary tree.
    int height(Node *root){

        //base case
        if(root == NULL){
            return 0;
        }

        int left = height(root->left);
        int right = height(root->right);

        int answer = max(left, right) + 1;
        return answer;

    }
    {

        TIME COMPLEXITY IS 0(N*2); NOT GOOD
        
    } 
    // Function to check whether a tree is balanced or not
    bool isBalanced(Node *root){

        //Base case
        if(root = NULL)
        {
            return true;
        }
        
        //recursive call
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);

        bool difference = abs(height(root->left) - height(root->right)) <= 1; // we r calling every node two time one for isBalanced and other is for height thus increases time complexity 

        if(left && right && difference){
            return true;
        }
        else{
            return false;
        }

    }

*/

    

    pair<bool,int> isBalancedFast(Node* root){

        //Base Case
        if(root == NULL){
            pair<bool,int> p = make_pair(true, 0);
            return p;
        }

        //Recursive case

        pair<int, int> left = isBalanced(root->left);
        pair<int, int> right = isBalanced(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;


        bool difference = abs(left.second - right.second) <= 1;

        pair<bool,int> answer;
        answer.second = max(left.second, right.second) + 1;

        if(leftAns && rightAns && difference){
                answer.first = true;
        }
        else{
                answer.second = false;
        }
    }

    bool isBalanced(Node* root){
        return isBalancedFast(root).first; 
    }
int main(){

}