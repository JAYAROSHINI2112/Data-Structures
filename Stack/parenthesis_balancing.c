/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[20],stack[20],top=-1,p=0;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        scanf("%c",&a[i]);
    }
    if(top==n-1){
        printf("Stack is full");
    }
    else{
        for(i=0;i<=n;i++){
        top++;
        stack[i]=a[i];
        }
    }
    for(i=n;i>0;i--){
        if(stack[i]=='{'||stack[i]=='['||stack[i]=='(')
          p++;
        if(stack[i]=='}'||stack[i]==']'||stack[i]==')')
          p--;
    }
    if(p==0)
       printf("parenthesis is Balanced");
    else
       printf("parenthesis is not Balanced");
    return 0;
}
