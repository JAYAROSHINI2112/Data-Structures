// You are using GCC
#include<stdio.h>
#include<stdlib.h>
void insert(int x);
void print_midterm(int x);
struct node{
    int data;
    struct node*next;
};
struct node*head=NULL;
struct node*temp=NULL;
void insert(int x){
    int i,a[20];
    for( i = 0; i < x; i ++)
       scanf(" %d ",&a[i]);
    for(i = 0; i < x; i ++){
         struct node*newnode = ( struct node* ) malloc (sizeof(struct node));
         newnode -> data = a[i];
         if(head == NULL){
             head = newnode;
             temp = newnode;
         }
         else{
             temp->next=newnode;
             temp=newnode;
         }
    }
}
void print_midterm(int x){
    int i;
    struct node*t=head;
      int mid = x/2;
      if(mid % 2 == 0){
          for(i = 0; i < mid; i++){
              t = t -> next;
          }
          printf("%d ",t -> data);
      }
      else{
          for( i = 0; i < mid-1; i++){
               t = t -> next;
          }
          printf("%d ",t -> data);
          t = t -> next;
          printf("%d",t->data);
      }
}
int main(){
    int n,i;
    scanf("%d",&n);
    insert(n);
    print_midterm(n);
}
