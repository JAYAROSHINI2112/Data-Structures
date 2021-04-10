#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*temp;
struct node*t;
struct node*head=NULL;
void insert(int x,int y);
void display();
void insert(int x,int y){
    int i,a[20];
    for(i=0;i<x;i++)
      scanf("%d",&a[i]);
      
    for(i=0;i<x;i++){
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=a[i];
        if(head==NULL){
            temp=newnode;
            head=newnode;
         //   printf("%d ",temp->data);
        }
        else{
            temp->next=newnode;
            temp=newnode;
          //  printf("%d ",temp->data);
        }
    } 
    struct node*node=(struct node*)malloc(sizeof(struct node));
    node->data=y;
    temp->next=node;
    temp=node;
   
}

void display(){
    struct node*t=head;
    while(t!=NULL){
        printf("%d ",t->data);
        t=t->next;
    }
}
int main(){
    int n,key;
    scanf("%d",&key);
    scanf("%d",&n);
    insert(n,key);
    display();
    
}
