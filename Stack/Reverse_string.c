#include <stdio.h>

int main()
{
   int n,i,top=-1;
   char a[10],stack[10],b[10];
   scanf("%d",&n);
   for(i=0;i<=n;i++){
       scanf("%c",&a[i]);
   }
   
   if(top==n-1){
       printf("Stack is Full");
   }
   else{
       for(i=0;i<=n;i++){
       top++;
       stack[top]=a[i];
       }
   }
   printf("Stack value is ");
    for(i=n;i>=0;i--){
    printf("%c",stack[i]);
    }
    
    for(i=0;i<=n;i++){
    b[i]=stack[i];
    }
     printf("Reverse Stack value is ");
     for(i=0;i<=n;i++){
     printf("%c",b[i]);
     }
} 
