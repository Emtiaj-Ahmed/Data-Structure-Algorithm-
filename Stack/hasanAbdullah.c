#include <stdio.h>
#define stacksize 100

int mystack[stacksize];
int top=-1;
void push(int value)
{
    if(top>=stacksize-1)
       printf("Stack is full! Cannot push the value!");
       else
        mystack[++top]=value;

}
void peek()
{
    if( top<0)
        printf("Stack is Empty! \n");
    else
        printf("%d\n",mystack[top]);
}
void pop()
{
    if(top<0)
    printf("Stack is empty!Can not POP any value!\n");
    else
        top--;
}
void displayStack()
{
    printf("\nPrint the full stack from TOP to BOTTOM:\n");
    for(int i = top; i>=0; i--)
        printf("%d\n",myStack[i]);
}

int main()
{

    push(5);
    push(90);
    push(12);

    displayStack();

    pop();

    displayStack();

    printf("\nTop value of this Stack:   ");
    peek();


    return 0;
}
