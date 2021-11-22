#include<stdio.h>
int main(){
    system("cls");
   int list[40]={30,50,20,10,45,65,5},pos,size,val;
   size=7;
    void insert(int val,int pos){
    for(int i=size-1;i>=pos-1;i--){
        list[i+1]=list[i];
    }
    printf("the element %d is inseterd in %d position",val,pos);
    list[pos-1]= val;
    size++;
    }
    void remove(int pos){
        for(int j=pos+1;j<=size;j++){
            list[j-1]=list[j];
        }
        printf("the element at position %d is removed",pos);
        size--;
    }
    void display(){
    for(int i=0;i<size;i++){
        printf("%d\n",list[i]);
        }
    }
    void find(int val){
        for(int i=0;i<size;i++){
            if (list[i]==val){printf("the element %d is in the position of %d \n",list[i],i+1);}
        }
    }
    printf("\nthe list at initil state\n ");
    display();
    printf("\nthe list after insertion\n ");
    insert(5,5);
    display();
    printf("\nthe list after deletion\n ");
    remove(5);
    display();
    find(50);
    return 0;
}