#include <stdio.h>

int main()
{
   int n,a[10],stack[10],i,j,x,top=-1;
   
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   
   if(top==n-1){
       printf("Stack is Full");
   }
   else{
       for(i=0;i<n;i++){
       top++;
       stack[top]=a[i];
       }
   }
   
      
   for(i=n-1;i>=0;i--){
       for(j=i-1;j>=0;j--){
           if(stack[i]>stack[j]){
               x =  stack[i];
                    stack[i] = stack[j];
                    stack[j] = x;
           }
       }
   }
    for(i=n-1;i>=0;i--)
    printf("%d ",stack[i]);
}
