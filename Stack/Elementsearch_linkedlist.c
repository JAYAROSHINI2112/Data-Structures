#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node*top=NULL;
void push();
void display();
int main(){
    push(); 
    display();
}
   void push(){
      int item,n;
      scanf("%d",&n);
      for(int i=0;i<n;i++){
      scanf("%d",&item);
      struct node*newnode=(struct node*)malloc(sizeof(struct node));
      newnode->data=item;
      newnode->next=top;
      top=newnode;
      }
      } 
  void display(){
      int k,p=0;
      scanf("%d",&k);
      struct node*temp;
      temp=top;
      while(temp!=0){
          if(k==temp->data){
              p++;
          }
          temp=temp->next;
      }
          if(p==0){
              printf("Element Not Found");
          }
          else
            printf("Element Found");
             
          
      
      
  }
