// You are using GCC
#include<stdio.h>
int m[20],x[10],y[10],n,front=-1,rear=-1;
int main(){
    int i;
    scanf("%d",&n);
if(n>0){    
    for(i=1;i<=n;i++){
        if(rear==n-1)
           printf("Full");
        else if(rear==-1&&front==-1){
            front=rear=0;
            m[rear]=i;
        }
        else{
            rear++;
             m[rear]=i; 
        }
        
    }
   for(i=0;i<n/2;i++){
          x[i]=m[i];
        }
      int j=0; 
    for(i=n/2;i<n;i++){
         y[j]=m[i];
         j++;
    }  
    for(i=0;i<n;i++){
      if(x[i]!=0&&y[i]!=0) {
        printf("%d %d ",x[i],y[i]);
      }
    }
}
}
