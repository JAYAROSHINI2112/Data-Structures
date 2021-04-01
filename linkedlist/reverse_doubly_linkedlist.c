// You are using GCC
#include<stdio.h>
#include<stdlib.h>
void reverse(int n);
void display(int n);
struct node{
    struct node*next;
    struct node*prev;
    int data;
};
struct node*head=NULL;
struct node*temp=NULL;
int main(){
    int n,i,a[30],item;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&item);
     struct node*newnode=(struct node*)malloc(sizeof(struct node));
     if(head==NULL){
        head=newnode;
        temp=newnode;
        temp->data=item;
         //printf("%d ",temp->data);
     }
     else{
         temp->next=newnode;
         newnode->prev=temp;
         temp=newnode;
         temp->data=item;
       //  printf("%d ",temp->data);
         }
    }
    reverse(n);
    printf("\n");
    display(n);
}
void reverse(int n){
   
    for(int i=0;i<n;i++){
        printf("%d  ",temp->data);
         temp=temp->prev;
    }
}
void display(int n){
    struct node*temp=head;
    for(int i=0;i<n;i++){
        printf("%d  ",temp->data);
        temp=temp->next;
    }
}
