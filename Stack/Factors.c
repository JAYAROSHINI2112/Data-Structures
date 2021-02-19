#include <stdio.h>

int main()
{
   int n,i,stack[10],top=-1;
   scanf("%d",&n);
  if(top>=-1){
    top++;
   stack[top]=n;
  }
  
   for(i=2;i<=n/2;i++){
      if(stack[top]%i==0){
          printf("%d ",i);
      }   
   }
    printf("%d",n);
    return 0;
}
