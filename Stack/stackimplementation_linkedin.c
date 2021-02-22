#include <stdio.h>
#include <stdlib.h>
struct node 
    { 
        int data; 
        struct node *next; 
    };

struct node *top = NULL;
void push();
int peak(){
    return top->data;
}

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)  
        push(); 
    printf("%d",  peak());
    return 0;
}

void push() {
    int item;  
    scanf("%d", &item);
    struct node *nptr = malloc(sizeof(struct node));
    nptr->data = item;  
    nptr->next = top; 
    top = nptr;
}
