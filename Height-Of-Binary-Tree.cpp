#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left,*right;
};


int MaxHeight(Node* node)
{

   if(node == NULL)
    return 0;

   return (1  + max(MaxHeight(node->left),MaxHeight(node->right)));

}
Node* CreateNode(int data)
{

    Node* new_node = new Node;
    new_node->data=data;
    new_node->left = new_node->right = NULL;
    return new_node;

}

int main()
{
    Node* root = NULL;
    root = CreateNode(1);
    root->left = CreateNode(2);
    root->right = CreateNode(3);
    root->left->left = CreateNode(4);
    root->left->right = CreateNode(5);
    root->right->left = CreateNode(6);
    root->right->right = CreateNode(7);
cout<<"Maximum Height of Binary Tree : "<<MaxHeight(root);
    return 0;
}
