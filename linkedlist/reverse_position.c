// You are using GCC
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head=NULL;
void reverse(int k);
void display();

void reverse(int k){
   int i;
   struct node*s=head;
   struct node*p=head;
   for(i=0;i<k-1;i++){
     s=s->next;  
     p=p->next;
   }
   for(i=0;i<k;i++){
       printf("%d ",s->data);
       s=s->prev;
   }
   p=p->next;
   for(i=0;i<k;i++){
       if(p->data!=0){
       printf("%d ",p->data);
       p=p->next;
       }
   }
}
void display(){
    struct node*t=head;
    while(t->data!=NULL){
       // printf("%d ",t->data);
        t=t->next;
    }
}
int main(){
    int i,item,key;
    i=1;
    struct node*temp;
    while(i!=0){
        scanf("%d",&item);
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=item;
        i=item;
        if(head==NULL){
            head=newnode;
            temp=newnode;
           // printf("%d ",temp->data);
         }
         else{
             newnode->prev=temp;
             temp->next=newnode;
             temp=newnode;
            // printf("%d ",temp->data);
         }
        
    }
    scanf("%d",&key);
    reverse(key);
    display();
}
