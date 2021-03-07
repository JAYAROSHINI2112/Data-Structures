// You are using GCC
#include<stdio.h>
#include<string.h>
#include<ctype.h>
char stack[20];
int top=-1;
int push(char x);
int pop();
int priority(char x);
int main(){
   
    char exp[20],*e,x;
    scanf("%s",&exp);
    e=exp;
    while(*e!='\0'){
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e=='(')
           push(*e);
        else if(*e==')'){
            while((x=pop())!='(')
               printf("%c",x);
        }
        else{
            while(priority(stack[top])>=priority(*e)){
               printf("%c",pop());
            }
            push(*e);
        }
        e++;
    }
    while(top!=-1){
        printf("%c",pop());
    }
}
int push(char x){
    stack[++top]=x;
}
int pop(){
    if(top==-1)
      return -1;
    else  
    return stack[top--];
}
int priority(char x){
    if(x=='(')
      return 0;
    else if(x=='+'||x=='-')
       return 1;
    else if(x=='*'||x=='/'||x=='%')
        return 2;
   else if(x=='^')
       return 3;
    else
        return 0;
}
