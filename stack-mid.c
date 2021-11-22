#include<stdio.h>
#include<stdlib.h>
struct node {
        int data;
        struct node *next;
        };
void main(){
    struct node *head;
    void push(){
        struct node *ptr;
        int item;
        ptr=(struct node *)malloc(sizeof(struct node));
        if(ptr==NULL){
            printf("\nOVERFLOW\n"); 
        }
        else{
            printf("\nEnter value\n");   
        scanf("%d",&item);    
        ptr->data = item;
        ptr->next = head;
        head=ptr;
        printf("\n %d is pushed  \n",item);
        
    }
    }
    void display(){
        struct node *ptr;
        ptr = head;
        if(ptr==NULL){
            printf("\nNothing to print \n");
        }
        else{
            printf("\n printing values\n");
            while (ptr!=NULL){
            printf("\n%d",ptr->data);  
            ptr = ptr -> next; 
            }  
        }
    }
    void pop(){
        struct node *ptr;
        if(head==NULL){
            printf("\nNothing to pop\n");
        }
        else{
            ptr=head;
            head = ptr -> next;
            free(ptr);
            printf("\n poped sucessfully....\n");
        }
    }
push();
push();
push();
pop();
display();
}