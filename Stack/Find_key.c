#include <stdio.h>

int main()
{
   int n,a[10],stack[10],i,top=-1,k;
   
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   scanf("%d",&k);
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
      if(stack[i]==k){
           printf("Element is Found  ");
      }
      
   }
}
