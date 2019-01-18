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

void InsertNode(Node* node,int key)
{

    list<Node* > q;
    q.push_back(node);

    while(q.empty() == false)
    {
        Node* temp = q.front();
        q.pop_front();
        if(temp->left == NULL)
        {
            node->left = CreateNode(key);
            break;
        }
        else
        {
            q.push_back(node->left);
        }

        if(temp->right ==  NULL)
        {
            temp->right = CreateNode(key);
            break;
        }
        else
        {
            q.push_back(temp->right);
        }
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
    cout<<"Before Inserion: Pre-order traversal\n";
    PreOrder(root);
    InsertNode(root,7);
    cout<<"\nAfter Traversal: Pre-oreder traversal\n";
    PreOrder(root);






return 0;
}
