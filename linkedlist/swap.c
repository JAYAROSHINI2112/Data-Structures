// You are using GCC
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head=NULL;
void insert(int x);
void swap(int x);
void display(int x);

void insert(int x){
    int i,item;
    struct node*temp;
  for(i=0;i<x;i++){
      struct node*newnode=(struct node*)malloc(sizeof(struct node));
      scanf("%d",&item);
      newnode->data=item;
      if(head==NULL){
          head=newnode;
          temp=newnode;
         // printf("%d ",temp->data);
      }
      else{
          temp->next=newnode;
          temp=newnode;
         // printf("%d ",temp->data);
      }
  }  
}

void swap(int x){
    int m,n,i;
    scanf("%d %d",&m,&n);
    struct node*temp=head;
    struct node*temp1;
    struct node*temp2;
    struct node*tempo;
    for(i=1;i<m;i++){
      temp=temp->next;
      temp1=temp;
    }
    //  printf("%d ",temp1->data);
      temp=head;
      for(i=1;i<n;i++){
          temp=temp->next;
          temp2=temp;
      }
    // printf("%d ",temp2->data);
    tempo->data=temp1->data;
    temp1->data=temp2->data;
    temp2->data=tempo->data;
}
void display(int x){
    struct node*t=head;
    for(int i=0;i<x;i++){
       printf("%d ",t->data);
        t=t->next;
    }
}
 int main(){
     int n;
     scanf("%d",&n);
     insert(n);
     swap(n);
     display(n);
 }
