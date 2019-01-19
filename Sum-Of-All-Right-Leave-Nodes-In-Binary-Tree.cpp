#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left,*right;
};

bool IsLeafNode(Node* node)
{
    if(node == NULL)
        return false;
    if(node->left == NULL && node->right == NULL)
        return true;

    return false;//donot foget this condition otherwise it will consider the parent node as well
}

void FindRightLeafNodeSum(Node* node, int& sum)
{

    if(node == NULL)
        return;
    if(IsLeafNode(node->right))
    {
        sum += node->right->data;
    }

    FindRightLeafNodeSum(node->left,sum);
    FindRightLeafNodeSum(node->right,sum);

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
    int sum = 0 ;
    FindRightLeafNodeSum(root,sum);
cout<<"Sum of All Leaf Nodes Of Tree is : "<<sum;
    return 0;
}
