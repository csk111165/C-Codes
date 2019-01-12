#include<iostream>
using namespace std;

struct Node{

int data;
Node* next;
};

Node* CreateNode(int data){
Node* new_node = new Node;
new_node->data = data;
return  new_node;


}

void InsertAtBeg(Node*& head,int data){ //pass head as reference

Node* new_node = new Node;
new_node->data = data;
new_node->next = head;
head = new_node;


}
void InsertAtEnd(Node*& head, int data){

Node* new_node = new Node;
new_node->data=data;
new_node->next =  NULL;
Node* temp  = head;

while(temp->next != NULL)
    temp = temp->next;

temp->next = new_node;

}


void PrintList(Node* node){

if(node == NULL)
    return;
else{

    Node* temp = node;
    while(temp){

        cout<<temp->data<<" ";
        temp = temp->next;
    }

}

}

int main(){

Node* head = NULL;
InsertAtBeg(head,3);
InsertAtBeg(head,2);
InsertAtBeg(head,1);

InsertAtEnd(head,100);

PrintList(head);


return 0;
}
