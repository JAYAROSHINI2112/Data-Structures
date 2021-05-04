// You are using GCC
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head=NULL;
int main(){
    int n,key,i,item;
    struct node*temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&item);
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=item;
        if(head==NULL){
            temp=newnode;
            head=newnode;
           // printf("%d ",temp->data);
        }
        else{
            newnode->prev=temp->next;
            temp->next=newnode;
            temp=newnode;
           // printf("%d ",temp->data);
        }
    }
    scanf("%d",&key);
   // printf("%d ",key);
   struct node*x=head;
   for(i=1;i<key;i++){
       x=x->next;
    }
    printf("%d ",x->data);
}
