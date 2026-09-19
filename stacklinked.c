Aim: To implement Stack operations using a Linked List in C.

Algorithm:

Start.
Create a node with data and next.
Initialize top = NULL.
For Push, create a new node and insert it at the top.
For Pop, remove the top node and free its memory.
For Peek, display the data of the top node.
Check for Overflow during memory allocation and Underflow when the stack is empty.
Stop.
  
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
