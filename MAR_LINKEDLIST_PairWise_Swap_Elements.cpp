#include<iostream>
using namespace std;

struct Node{

int data;
Node* next;

};


void InsertAtBeg(Node*& head,int data)
{     Node* new_node = new Node();
      new_node->data = data;
      new_node->next = head;
      head  =  new_node;
}

void PrintList(Node* node)
{
    Node* temp = node;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void SwapTheData(int& a ,int& b)
{
    int t;
    t=a;
    a=b;
    b=t;
}

void PairWiseSwap(Node* node)
{

    Node* temp = node;

    while(temp != NULL && temp->next != NULL)
    {
        SwapTheData(temp->data , temp->next->data);
        temp = temp->next->next; //move for the next pair

    }


}


int main()
{


    Node* head = NULL;
    InsertAtBeg(head,5);
    InsertAtBeg(head,4);
    InsertAtBeg(head,3);
    InsertAtBeg(head,2);
    InsertAtBeg(head,1);
    cout<<"Original List : \n";
    PrintList(head);
    cout<<"\nSwapping The Elements PairWise:\n";
    PairWiseSwap(head);
    cout<<"\nThe Modeified List : \n";
    PrintList(head);

return 0;
}
