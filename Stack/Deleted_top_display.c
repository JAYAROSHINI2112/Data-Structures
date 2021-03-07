// You are using GCC
#include<stdio.h>
#include<stdlib.h>
int push();
void pop();
void display();
struct node*top=NULL;
struct node{
    int data;
    struct node*next;
};
int main(){
    int n;
    push();
    pop();
    display();
}
int push(){
    int item,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&item);
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=item;
        newnode->next=top;
        top=newnode;
    }
   
}
void pop(){
   struct node*temp;
   temp=top;
   printf("Deleted element is %d\n",temp->data);
    top=temp->next;
   
}
void display(){
    struct node*temp;
    temp=top;
    printf("The elements in stack\n");
   while(temp!='\0'){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
