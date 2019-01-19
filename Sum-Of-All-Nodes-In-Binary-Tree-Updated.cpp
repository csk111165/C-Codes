#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left,*right;
};

int FindSum(Node* node,int& sum)
{

    if(node == NULL)
        return 0;
    if(node)
        sum += node->data;

    FindSum(node->left,sum);
    FindSum(node->right,sum);
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
    int sum =0 ;
    FindSum(root,sum);
cout<<"Sum of All Nodes Of Tree is : "<<sum;
    return 0;
}
