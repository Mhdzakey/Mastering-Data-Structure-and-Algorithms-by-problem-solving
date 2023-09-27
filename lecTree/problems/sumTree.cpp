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
    pair<bool, int> isSumTreeFast(Node* root ){

        //base case
        if(root == NULL){
            pair<bool,int> p = make_pair(true,0);
            {
                return p;
            }
        }
        // Leaf Condition

        if(root->left == NULL && root->right == NULL){
            pair<bool,int> p = make_pair(true, root->data);
            {
                return p;
            }

        }

        pair<bool, int> leftAns = isSumTreeFast(root->left);
        pair<bool, int> rightAns = isSumTreeFast(root->right);

        bool isLeftSumTree = leftAns.first;
        bool isRightSumTree = rightAns.first;

        int leftSum = leftAns.second;
        int rightSum = rightAns.second;

        bool condition = root->data == leftSum + rightSum;

        pair<bool,int> answer;
        if(isLeftSumTree && isRightSumTree && condition){
            answer.first; 
            answer.second = root->data + leftSum + rightSum; 
        }
        else
        {
            answer.first = false;
        }

        return answer;
    }

    bool isSumTree(Node* root){
        return isSumTreeFast(root).first;
    }