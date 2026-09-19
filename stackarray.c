Aim: To implement stack operations using an array in C.

Algorithm:

Start.
Initialize top = -1.
Display the stack operation menu.
Read the choice.
Perform Push, Pop, Peek, or Display according to the choice.
Check Overflow during Push and Underflow during Pop.
Repeat the menu until the user selects Exit.
Stop.

#include<stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push();
void pop();
void peek();
void display();
int main()
{
int choice;
while(1)
{
printf("\n***STACK OPERATIONS***\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.peek\n");
printf("4.display\n");
printf("5.exit\n");
printf("Enter your choice (1-5):");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
peek();
break;
case 4:
display();
break;
case 5:
printf("Exiting prgm.\n");
exit(0);
default:
printf("invalid choice!please a no between 1 and 5.\n");
}
}
return 0;
}
void push(){
int value;
if(top==MAX -1)
printf("stack Overflow! Cannot push  more elemeny.\n");
else
{
printf("enter the value to push:");
scanf("%d",&value);
top++;
stack[top]=value;
printf("%d successfully pushed onto the stack.\n",value);
}
}
void pop(){
if(top== -1){
printf("stack underflow! the stack is already empty.\n");
}
else
{
printf("popped element:%d\n",stack[top]);
top--;
}
}
void peek(){
if(top== -1){
printf("stack is empty.no element at the top.\n");
}
else
{
printf("top element:%d\n",stack[top]);
}
}
void display(){
if(top== -1){
printf("stack is  empty.\n");
}
else
{
printf("stack element(from top to bottom):\n");
for (int i= top;i>=0;i--){
printf("|%d|\n",stack[i]);
}
printf("-----\n");
}
}




