#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void main(){
    int size,last=0;
    
    int arr[100];
    int data[]={30,50,20,10,45,65,5};
    last=6;
    for (int i=0;i<=6;i++){
        arr[i]=data[i];
    }
    void insert(int pos,int val){
        if(last>size){
            printf("aray is full");
        }
        else {
            for(int i=last;i<pos;i--){
                arr[i]=arr[i+1];
            }
            arr[pos]=val;
            last++;
        }
    }
    void remove(int pos){
        if(pos<last){
            printf("in valid postion");
        }
        else{
            pos-=1;
            for(int i=pos-1;i<=size;i++){
                arr[i]=arr[i+1];
            }
        }
    }
    void display(){
        for (int i=0;i<last;i++){
            printf("%d\n",arr[i]);
        }
    }
    void search(int val){
        for(int i=0;i<last;i++){
            if (arr[i]==val){
                printf("element found at %d\n",i+1);
            }
        }
    }
    insert(2,5);
    int s;
    scanf("%d",&s);
    search(s);
    display();
}
