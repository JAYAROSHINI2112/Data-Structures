#include<stdio.h>
#include<stdlib.h>
void insert();
void inser_position(int k);
void display();
struct node{
    struct node*next;
    int data;
};
struct node*head=NULL;
struct node*temp=NULL;
void insert(){
    int x=6,i;
    for(i=0;i<4;i++){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        newnode->data=x;
        head=newnode;
        temp=newnode;
        x++;
        printf("%d ",temp->data);
    }
    else{
       newnode->data=x;
       temp->next=newnode;
       temp=newnode;
       x++;
       printf("%d ",temp->data);
      }
  }
}
void insert_position(int key){
    struct node*t=head;
    for(int i=0;i<1;i++){
        t=t->next;
    }
    struct node*v=(struct node*)malloc(sizeof(struct node));
    v->data=key;
    v->next=t->next;
    t->next=v;
}
void display(){
    struct node*tempo=head;
    printf("\n");
    while(tempo!=NULL){
        printf("%d ",tempo->data);
        tempo=tempo->next;
    }
    
}
int main(){
    int i,key;
    scanf("%d",&key);
    insert();
    insert_position(key);
    display();
}
