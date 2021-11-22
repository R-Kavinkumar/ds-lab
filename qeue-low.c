#include<stdio.h>
#include<stdlib.h>
struct node {
        int data;
        struct node *next;
        };
void main(){
    struct node *head;
    void enqueue(){
        struct node *ptr,*temp;
        int item;
        ptr=(struct node *)malloc(sizeof(struct node));
        if(ptr==NULL){
            printf("\nOVERFLOW\n"); 
        }
        else{
            printf("\nEnter value\n");   
        scanf("%d",&item);    
        ptr->data = item;
        if(head==NULL){
            ptr->next = NULL;
            head = ptr;
            printf("\n %d enqueued sucessfully\n",item);
        }
        else{
            temp = head;
            while(temp->next!=NULL){
                    temp=temp->next;
            }
            temp->next=ptr;
            ptr->next =NULL;
            printf("\n %d enqueued sucessfully\n",item);
        }
        
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
    void dequeue(){
        struct node *ptr;
        if(head==NULL){
            printf("\nNothing to dequeue\n");
        }
        else{
            ptr=head;
            head = ptr -> next;
            free(ptr);
            printf("\n dequeueed sucessfully....\n");
        }
    }
enqueue();
enqueue();
enqueue();
dequeue();
display();
}