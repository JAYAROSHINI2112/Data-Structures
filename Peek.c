// You are using GCC
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*top=NULL;
void push(int x);
void peek();
int main(){
    int n;
    scanf("%d",&n);
    push(n);
    peek();
}
void push(int x){
    int item; 
    for(int i=0;i<x;i++){
        scanf("%d",&item);
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=item;
        newnode->next=top;
        top=newnode;
    }
}
void peek(){
    struct node*temp;
    temp=top;
    printf("%d",temp->data);
}
