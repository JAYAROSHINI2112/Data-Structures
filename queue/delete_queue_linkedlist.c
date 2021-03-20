// You are using GCC
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
 };
struct node*rear=0;
struct node*front=0;
int n;
void enqueue();
void dequeue();
void enqueue(){
    int item;
    scanf("%d",&item);
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=0;
    
    if(rear==0&&front==0){ 
        front=rear=newnode;
       
        
    }
    
    else{
         rear->next=newnode;
         rear=newnode;
         
    }
}
void dequeue(){
    int k;
    scanf("%d",&k);
   
    struct node*temp=front;
    for(int i=0;i<k;i++){
      
        if(front==0 && rear==0){
            printf("Queue is empty");
        }
        else{
            printf("Element deleted from queue is : %d\n",front->data);
            front=front->next;
            
        }
    }
}
int main()
{
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       enqueue();
    }
       dequeue();
    
        
}
