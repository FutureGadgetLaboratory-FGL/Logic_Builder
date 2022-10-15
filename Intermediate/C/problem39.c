#include <stdio.h>
#include <stdlib.h>
#define nl printf("\n")

int i=0;

struct node{
    int data;
    struct node* next;
};

void deletenodeatanypos(struct node** head){
    nl;
    printf("Enter the position at which the node to be deleted: ");
    int n,count=0;
    scanf("%d",&n);
    if(n>10) return;
    struct node* current = *head;

    while(current->next != NULL && count!= (n-1)){
        count++;
        current = current->next;
    }
    struct node* temp= current ->next;
    current ->next = current ->next ->next;
    free(temp);
}

struct node* creatingnode(){ 


    struct node* newnode = malloc (sizeof(struct node));

    newnode->data=i;
    i++;
    
    return newnode;    
}
void insertnodeatbeginning(struct node** head){

    struct node* newnode =  (creatingnode());
    newnode->next =  *head;
    *head = newnode;
            
}

void insertnodeatend(struct node** head){
    nl;
    struct node* current = *head;
    struct node* newnode = creatingnode();
    newnode->next = NULL;

    while(current->next != NULL){
        current = current->next;
    }
    current->next = newnode;
}


int display(struct node** head){

    struct node* current = *head;
    if(*head == NULL) return printf("No first node exist.");

    printf("Data in node: ");
    while(current != NULL){
        printf(" %d",current->data);
        current = current->next;
    }

    nl;
}

int main(){
    
    struct node* head = NULL;
    int n;

    printf("Node Creating ..... ");

    insertnodeatbeginning(&head);

    printf("Node Creating ..... ");

    while(i!=11){
        insertnodeatend(&head);
    }
    display(&head);
    
    printf("Node Created!!!");
    deletenodeatanypos(&head);
    display(&head);

}