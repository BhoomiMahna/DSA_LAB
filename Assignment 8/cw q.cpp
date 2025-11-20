#include <iostream>
#include<queue>
using namespace std;

class Node{
	public:
		
	int data;
	Node* left;
	Node* right;
	
		Node(int d){
			data=d;
			left=NULL;
			right=NULL;
		}
};
Node* tree(){
	int x;
	cin>>x;
	if(x==-1) return NULL;
	Node *root= new Node(x);
	queue<Node*>q;
	q.push(root);
	while(!q.empty()){
		Node* temp=q.front();
		q.pop();
		int leftv, rightv;
		if(!(cin >> leftv)) break;
	
		if(leftv!=-1){
			temp->left=new Node(leftv);
			q.push(temp->left);
		}
		  if(!(cin >> rightv)) break;
	
		if(rightv!=-1){
			temp->right=new Node(rightv);
			q.push(temp->right);
		}
	}
	return root;
}
void preorder(Node* root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
int main(){
	Node  *root=tree();
	preorder(root);
	return 0;
	
}
