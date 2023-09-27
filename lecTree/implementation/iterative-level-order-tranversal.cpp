#include <iostream>
#include <stack>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree {
private:
    Node* root;

public:
    BinaryTree() {
        root = NULL;
    }

    void insert(int value) {
        root = insertRecursive(root, value);
    }

    Node* insertRecursive(Node* node, int value) {
        if (node == NULL) {
            return new Node(value);
        }

        if (value < node->data) {
            node->left = insertRecursive(node->left, value);
        } else if (value > node->data) {
            node->right = insertRecursive(node->right, value);
        }

        return node;
    }

    void inorderTraversal() {
        if (root == NULL) return;

        stack<Node*> s;
        Node* current = root;

        while (current != NULL || !s.empty()) {
            while (current != NULL) {
                s.push(current);
                current = current->left;
            }

            current = s.top();
            s.pop();

            cout << current->data << " ";

            current = current->right;
        }
    }

    void preorderTraversal() {
        if (root == NULL) return;

        stack<Node*> s;
        s.push(root);

        while (!s.empty()) {
            Node* current = s.top();
            s.pop();

            cout << current->data << " ";

            if (current->right != NULL)
                s.push(current->right);
            if (current->left != NULL)
                s.push(current->left);
        }
    }

    void postorderTraversal() {
        if (root == NULL) return;

        stack<Node*> s1, s2;
        s1.push(root);

        while (!s1.empty()) {
            Node* current = s1.top();
            s1.pop();
            s2.push(current);

            if (current->left != NULL)
                s1.push(current->left);
            if (current->right != NULL)
                s1.push(current->right);
        }

        while (!s2.empty()) {
            cout << s2.top()->data << " ";
            s2.pop();
        }
    }
};

int main() {
    BinaryTree tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    cout << "Inorder Traversal: ";
    tree.inorderTraversal();
    cout << endl;

    cout << "Preorder Traversal: ";
    tree.preorderTraversal();
    cout << endl;

    cout << "Postorder Traversal: ";
    tree.postorderTraversal();
    cout << endl;

    return 0;
}

