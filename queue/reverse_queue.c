#include<stdio.h>
#include<stdlib.h>
void enqueue();
void display();
int rear=-1,front=-1,n,q[20];
int main()
{
    int i;
    scanf("%d",&n);
    //printf("%d-",n);
    for(i=0;i<n;i++){
        enqueue();
    }
    display();
}
void enqueue(){
    int item;
   // printf("%d",n);
    scanf("%d",&item);
    if(rear==n-1){
       printf("Queue is full");
    }
    else if(rear==-1&&front==-1)
    {
        rear=front=0;
        q[rear]=item;
    }
    else{
        rear++;
        q[rear]=item;
    }
}
void display(){
    for(int i=n-1;i>=0;i--)
        printf("%d ",q[i]);
    
}
