Aim

To write a C program to calculate the sum of elements of a floating-point array using a function.

Algorithm
Start.
Declare and initialize a floating-point array with 6 elements.
Pass the array to the calculateSum() function.
Initialize sum = 0.0.
Use a for loop to access each element of the array.
Add each element to sum.
Return the calculated sum to the main() function.
Display the result with two decimal places.
Stop.

#include <stdio.h>
float calculateSum(float num[]);
int main()
{
float result, num[] = {23.4, 55, 22.6, 3, 40.5, 18};

result = calculateSum(num);
printf("Result = %.2f", result);
return 0;
}
float calculateSum(float num[])
{
float sum=0.0;
for(int i=0; i<6; ++i){
sum += num[i];
}
return sum;
}
