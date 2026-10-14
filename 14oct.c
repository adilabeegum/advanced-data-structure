PRINTING ARRAY ELEMENTS IN REVERSE ORDER
#include <stdio.h>
int main()
{
int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
int i;
for(i = 9; i >= 0; i--)
printf("%d ", array[i]);
return 0;
}
FINDING SUM OF ELEMENTS IN ARRAY
#include <stdio.h>
int main()
{
int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
int sum, i;
sum = 0;
for(i = 9; i >= 0; i--)
sum = sum + array[i];
printf("Sum of array is %d.", sum);
return 0;
}
FINDING LARGEST AND SECOND LARGEST ELEMENT IN AN ARRAY
#include <stdio.h>
int main()
{
int array[10] = {101, 11, 3, 4, 50, 69, 7, 8, 9, 0};
int i, largest, second;
if(array[0] > array[1])
{
largest = array[0];
second = array[1];
}
else
{
largest = array[1];
second = array[0];
}
for(i = 2; i < 10; i++)
{
if( largest < array[i] )
{
second = largest;
largest = array[i];
}
else if( second < array[i] )
{
second = array[i];
}
}
printf("Largest - %d \nSecond - %d \n", largest, second);
return 0;
}
