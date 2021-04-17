#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*last;
struct node*head=NULL;
void insert(int x);
void deletekey();
void display();

void insert(int x){
    int i,item;
    struct node*temp=head;
    for(i=0;i<x;i++){
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&item);
        newnode->data=item;
        if(temp==NULL){
            temp=newnode;
            head=newnode;
        //    printf("%d ",temp->data);
        }
        else{
           newnode->prev=temp;
           temp->next=newnode;
           temp=newnode;
         //  printf("%d ",temp->data);
        }
    }
    last=temp;
   
}
void deletekey(){
    int key;
    scanf("%d",&key);
    struct node*t=head;
while(t!=NULL){
    if(t->data==key){
          
        // Delete if key is head  
        if(t==head){
           head=t->next; 
        }
        // Delete if key is Last
        else if(t->next==NULL){
            last=t->prev;
            t->prev->next=NULL;
            
          }
        else{
            t->prev->next=t->next;
            t->next->prev=t->prev;
        }  
          
     }
        t=t->next;
    }
}

void display(){
    struct node*var=head;
   
    while(last!=NULL){
        printf("%d ",last->data);
        last=last->prev;
    }
   
}
int main(){
    int n;
    scanf("%d",&n);
    insert(n);
    
    deletekey();
    display();
}
