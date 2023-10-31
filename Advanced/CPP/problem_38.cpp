/*Adding Circular Linked List*/
//Solved by aryangupta02092002

#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node*tmp=head;
    while(tmp->next!=head){
        tmp=tmp->next;
    }
    tmp->next=n;
    n->next=head;
    head=n;
}

void insertAtEnd(node* &head, int val){
    if(head==NULL){
        insertAtHead(head, val);
        return;
    }
    node* n=new node(val);
    node* tmp=head;
    while(tmp->next!=head){
        tmp=tmp->next;
    }
    tmp->next=n;
    n->next=head;

}

void display(node* head){
    node* tmp= head;
    do
    {
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    } while (tmp!=head);
    cout<<endl;
}

int main(){
    node* head=NULL;
    insertAtEnd(head, 6);
    insertAtEnd(head, 5);
    insertAtEnd(head, 2);
    insertAtEnd(head, 4);
    insertAtEnd(head, 3);
    insertAtEnd(head, 1);
    display(head);    //6 5 2 4 3 1 
    insertAtHead(head, 7);
    display(head);    //7 6 5 2 4 3 1 
}
