Aim: To access array elements and pass them to a function in C.

Algorithm:

Start.
Declare and initialize an integer array.
Define a function to display two integer values.
Access the required array elements using their indices.
Pass the elements to the function.
Display the values.
Stop.

 
#include <stdio.h>
void display(int age1, int age2)
{
printf("%d\n", age1);
printf("%d\n", age2);
}
int main()
{
 int ageArray[] = {2, 8, 4, 12};
display(ageArray[1], ageArray[2]);
return 0;
}
