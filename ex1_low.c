#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int size = 0,val,last=1,choice=0,pos=0;
    printf("enter the size of array: ");
    scanf("%d",&size);
    int list[size];
    for(int i=0;i<size;i++){
        list[i]=NULL;
    }
    bool append(int val){
        if (last>size){
            printf("\nOOPS! list is full\n");
            return false;
        }
        else{
            list[last] = val;
            return true;
        }
    }
    bool delete(){
        if (last==1){
            printf("\nOOPS! list is empty\n");
            return false;
        }
        else{
            return true;
        }
    }
    void display(){
        if(last>1){
        for (int i=1; i<last; i++){
            printf("%d \n", list[i]);
        }
        }
        else{
            printf("\nOOPS! list is empty\n");
        }
    }
    bool remove(int pos){
        if (last==1){
            printf("\nOOPS! list is empty\n");
            return false;
        }
        else if(list[pos]==NULL){
            printf("\n NP ELEMENT IN %d \n ",pos);
            return false;
        }
        else{
            for(int j=pos;j<=last; j++){
                list[j-1] = list[j];
            }
            return true;
            list[last] = NULL;
        }
    }
    bool insert(int pos, int val){
        if (last>size ){
            printf("\nOOPS! list is full\n");
            return false;
        }
        else if (pos<=list){
            printf("\nOOPS! your list size is %d \n", size);
            return false;
        }
        else{
            for(int j=pos;j<=last; j++){
                list[j] = list[j+1];
            }
            list[pos] =val;
            return true;
        }

    }
    void search(int val){
        for(int i=0;i<last;i++){
                if (list[i] == val){
                    printf("\nTHE ELEMENT %d IN THE POSITION OF %d\n",val,i);
                }
        }
    }
    while (true){
        printf("\n--------------------------------\n1.DISPLAY\n2.APPEND\n3.DELETE\n4.INSERT\n5.REMOVE\n6.EXIT\n--------------------------------\n");
        
        scanf("%d",&choice);
        
            if(choice==2){
                printf("ENTER THE A NUMBER TO APPEND :");
                scanf("%d",&val);
                if (append(val)){
                    last++;
                    printf("\n THE ELEMENT %d IS SUCESSFULLY APPENDED ",val);
                }
            }
            if(choice==3){
            printf("ENTER THE A NUMBER TO DELETE :");
                if (delete()){
                    printf("\n THE LAST ELEMENT IS SUCESSFULLY DELETED ");
                    last--;
                }
            }
            if(choice==6){
                printf("\n BEY \nRUN ME AGAIN :) \n");
            exit(0);
            }
            if(choice==4){
                printf("ENTER THE A POSITION OF ELEMENT :");
                scanf("%d",&pos);
                printf("ENTER THE A NUMBER TO INSERT :");
                scanf("%d",&val);

                if(insert(pos,val)){
                    last++;
                    printf("\n VALUE %d is successfully inserted at position %d",val,pos);
                }
                
            }
            if(choice==5){
                printf("ENTER THE A POSITION OF ELEMENT :");
                scanf("%d",&pos);
            if(remove(pos+1)){
                    last--;
                    printf("\n The elemnt is removed successfully position %d",pos);
                }
                
            }
            if(choice==1){
                display();
            }

    }
    return 0;

}