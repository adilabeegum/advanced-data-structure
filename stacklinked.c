#include<stdio.h>
#include<stdlib.h>
struct node
{
ind data;
struct node*next;
};
struct node*top = null;
int isEmpty()
{
return top == null;
}
void push(int value)
{
struct node*newNode = (struct node*)malloc(sizeof(struct node));
if(newNode == null)
{
printf("stack overflow! cannot push %d.\n",value);
return;
}
newnode->data=value;
newnode->next=top;
printf("%d pushed to stack.\n",value);
}
void pop()
{
if(isEmpty())
{
printf("stack underflow! the stack is empty.\n");
return;
}
struct node*temp=top;
printf("popped element:%d\n",top->data);
top=top->next;
free(temp);
}
void peek()
{
if(isEmpty())
printf("stack is empty.\n");
else
printf("top element is:
