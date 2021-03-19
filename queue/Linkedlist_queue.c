// You are using GCC
#include<stdio.h>
#include<stdlib.h>
void enqueue();
void display();
int n;
struct node{
    int data;
    struct node*next;
};
struct node*top=NULL;
struct node*front=0;
struct node*rear=0;
void enqueue(){
    int item,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&item);
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=0;
   
    if(rear==0 && front==0){
       front=newnode;
       rear=newnode;
   
    }
    else{
    rear->next=newnode;
    rear=newnode;
    
     }
}
    
}
void display(){
    printf("Queue is : \n");
    struct node*temp;
    if(rear==0 && front==0){
       printf("Empty");
    }
    else{
        struct node*temp;
     temp=front;       
    while(temp!=0){
       printf("%d ",temp->data);
       temp=temp->next;
    }
  }
}
int main()
{
    enqueue();
    display();
    
}
