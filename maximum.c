Aim

To write a C program to find the maximum element in an array.

Algorithm
Start.
Declare an array and required variables n, i, and max.
Read the size n of the array.
Read n elements into the array.
Assign the first element of the array to max.
Compare max with each remaining element of the array.
If an element is greater than max, assign that element to max.
Repeat the comparison until all elements are checked.
Display the maximum element.
Stop.

#include<stdio.h>
int main(){
int n,i,arr[100],max;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
max=arr[0];
for(i=1;i<n;i++){
if(arr[i] > max)
    max = arr[i];
}
printf("maximum is %d",max);
return 0;
}
