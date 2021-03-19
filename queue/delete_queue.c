// You are using GCC
#include<stdio.h>
int main(){
    int i,n,q[20],x,rear=-1,front=-1,item;
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d",&item);
       if(rear==n-1)
         printf("Queue is Full");
       else if(rear==-1&&front==-1){
           rear=front=0;
           q[rear]=item;
       }    
       else{
           rear++;
           q[rear]=item;
       }
    }
      
    scanf("%d",&x);  
    
    for(i=front;i<x;i++){
       printf("Element deleted from queue is : %d\n",q[front]);    
         front++;
    }  
    printf("Queue is : \n");
    for(i=front;i<n;i++)
       printf("%d ",q[i]);
}
 
