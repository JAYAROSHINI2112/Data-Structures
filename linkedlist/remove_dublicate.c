#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head=NULL;

int main(){
    int i=1,j,item,a[20],p=0;
    struct node*temp;
    struct node*t;
   for(i=0;i<6;i++){
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&item);
        newnode->data=item;
        if(head==NULL){
            temp=newnode;
            head=newnode;
            t=head;
           // printf("%d ",temp->data);
        }
        else{
             temp->next=newnode;
             newnode->prev=temp;
             temp=newnode;
             t=newnode;
        //     printf("%d ",temp->data);
        }
    }
    for(i=0;i<6;i++){
        a[i]=temp->data;
        printf("%d ",temp->data);
        temp=temp->prev;
        t=t->prev;
    }
    printf("\n");
   for(i=0;i<6;i++){
       for(j=i+1;j<6;j++){
           if(a[i]==a[j]){
              p++;
       }
          }
          if(p==0){
              printf("%d ",a[i]);
          } 
          p=0;
       }
    
 }

    
