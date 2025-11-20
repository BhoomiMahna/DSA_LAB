#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        data = d;
        left =right=NULL;
    }
};

class BST {
public:
    Node* root;
    BST() {
        root =NULL;
    }

    Node* insert(Node* root, int val) {
        if (!root) return new Node(val);

        if (val<root->data)
            root->left=insert(root->left,val);
        else
            root->right=insert(root->right,val);

        return root;
    }

    void insert(int val) {
        root=insert(root,val);
    }

    bool searchNR(int val) {
        Node* temp=root;

        while (temp) {
            if (val==temp->data) return true;
            else if (val<temp->data) temp=temp->left;
            else temp=temp->right;
        }
        return false;
    }
    
    bool searchR(Node* root, int val) {
        if (!root) return false;
        if (root->data==val) return true;
        if (val<root->data) return searchR(root->left,val);
        return searchR(root->right,val);
    }
    
    int maxelement() {
        if (!root) return -1;
        Node* temp=root;
        while (temp->right) temp=temp->right;
        return temp->data;
    }
    
    int minelement() {
        if (!root) return -1;
        Node* temp=root;
        while (temp->left)temp=temp->left;
        return temp->data;
    }
    
    Node* inorderSuccessor(Node* root, Node* temp) {
        Node* suc=NULL;
        while (root){
            if (temp->data<root->data) {
                suc=root;
                root=root->left;
            } else {
                root=root->right;
            }
        }
        return suc;
    }
    
    Node* inorderPredecessor(Node* root, Node* temp) {
        Node* pred=NULL;
        while (root){
            if (temp->data>root->data) {
                pred=root;
                root=root->right;
            } else {
                root=root->left;
            }
        }
        return pred;
    }
};
