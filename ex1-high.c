#include<stdio.h>
#include<stdlib.h>
struct node {
        int data;
        struct node *next;
        };
void main(){
    struct node *head;
    void append(){
        struct node *ptr;
        int item;
        ptr=(struct node *)malloc(sizeof(struct node));
        if(ptr==NULL){
            printf("\nOVERFLOW"); 
        }
        else{
            printf("\nEnter value\n");    
        scanf("%d",&item);    
        ptr->data = item;
        ptr->next=head;
        head=ptr;
        printf("NODE CREATED\n");
        }
        
    }
    void display(){
        struct node *ptr;
        ptr = head;
        if(ptr==NULL){
            printf("Nothing to print ");
        }
        else{
            printf("\n printing values");
            while (ptr!=NULL){
            printf("\n%d",ptr->data);  
            ptr = ptr -> next; 
            }  
        }
    }
    void delete(){
        struct node *ptr;
        if(head==NULL){
            printf("Nothing to delete");
        }
        else{
            ptr=head;
            head = ptr -> next;
            free(ptr);
            printf("\n Node deleted sucessfully....\n");
        }
    }
     void search(){
            struct node *ptr;
            int element,flag,i=1;
            if (ptr==NULL){
                printf("\nNothing to search\n");
            }
            else{
                printf("\n enter the elment to search: ");
                scanf("%d",&element);
                while(ptr!=NULL){
                    if (ptr->data==element){
                        printf(" element found at the location %d",i);
                        flag=0;
                    }
                    else{
                        flag=1;
                    }
                    ptr = ptr -> next;
                    i++;

                }
                if (flag==1){
                    printf("\n The element not found in the list\n");
                }
            }
     }
append();
append();
append();
append();
append();
search();
delete();
display();
}
