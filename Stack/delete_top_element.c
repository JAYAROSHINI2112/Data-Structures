#include <stdio.h>

int main()
{
    int a[10],stack[10],i,n,top=-1,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      
    for(i=0;i<n;i++){
        top++;
        stack[top]=a[i];
    }  
     printf("%d  ",stack[top]);
     x=stack[top];
     top--;
     printf("The Top element %d is deleted",x);
      printf("%d",stack[top]);
       return 0;
}
