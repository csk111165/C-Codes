#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node* left,*right;
};


Node* CreateNode(int data){

Node* new_node = new Node();
new_node->data = data;
new_node->left = new_node->right = NULL;
return new_node;
}

void Inorder(Node* node){

if(node == NULL)
    return;

 Inorder(node->left);
 cout<<node->data<<" ";
 Inorder(node->right);


}


void PreOrder(Node* node){

if(node == NULL)
    return;

   cout<<node->data<<" ";
   PreOrder(node->left);
   PreOrder(node->right);


}

void PostOrder(Node* node)
{
    if(node == NULL)
        return;
    PostOrder(node->left);
    PostOrder(node->right);
    cout<<node->data<<" ";
}



int main(){

Node* root = CreateNode(1);
root->left = CreateNode(2);
root->right = CreateNode(3);
root->left->left = CreateNode(4);
root->left->right = CreateNode(5);
root->right->left = CreateNode(6);
root->right->right = CreateNode(7);
cout<<"Inorder Traversal: \n";
Inorder(root);

cout<<"\nPreOrder Traversal:\n";
PreOrder(root);

cout<<"\nPostOrder Traversal:\n";
PostOrder(root);



}
