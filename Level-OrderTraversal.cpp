
#include<bits/stdc++.h>
using namespace std;

//Insertion in Binary tree
//Creator:Chandra Shekhar
//19-01-19
struct Node
{

    int data;
    Node* left,*right;

};

//function declaration
Node* CreateNode(int data);

void PreOrder(Node* node)
{
    if(node ==NULL)
        return;
    cout<<node->data<<" ";
    PreOrder(node->left);
    PreOrder(node->right);
}

void LevelOrderTraversal(Node* node)
{

    list<Node* > q;
    q.push_back(node);

    while(q.empty() ==false)
    {
        Node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop_front();
        if(temp->left != NULL)
            q.push_back(temp->left);

         if(temp->right != NULL)
                q.push_back(temp->right);



    }


}

Node* CreateNode(int data)
{
    Node* new_node = new Node;
    new_node->data = data;
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
  LevelOrderTraversal(root);






return 0;
}
