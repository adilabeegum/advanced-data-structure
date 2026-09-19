Aim

To write a C program to reverse the elements of an array.

Algorithm
Start.
Declare and initialize an integer array.
Find the size of the array.
Pass the array and its size to the reversearray() function.
Create a temporary array of the same size.
Copy the elements of the original array into the temporary array in reverse order.
Copy the elements of the temporary array back into the original array.
Display the reversed array.
Stop.

#include<stdio.h>
#include<stdlib.h>
 void reversearray(int arr[],int n){
int temp[n];
for(int i=0;i<n;i++)
temp[i]=arr[n-i-1];
for(int i=0;i<n;i++)
arr[i]=temp[i];
}
int main(){
int arr[]={1,2,3,4,6,7};
int n=sizeof (arr) / sizeof(arr[0]);
reversearray (arr,n);
for (int i=0;i<n;i++)
printf("%d",arr[i]);
return 0;
}
