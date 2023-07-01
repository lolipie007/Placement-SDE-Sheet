/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h> 
#include<stdlib.h> 

void MinMax(int arr1[],int n){ //selection sort//
int min,max,temp;
for(int i=0;i<n-1;i++) 
 { 
 min=i;
  for(int j=i+1;j<n;j++){ 
   if(arr1[j]<arr1[min]){ 
    min=j;
   } 
   } 
   if(i!=min) { 
    temp=arr1[i]; 
    arr1[i]=arr1[min]; 
    arr1[min]=temp;
   }   
  } 
} 

void display(int arr2[],int n){ 
for(int i=0;i<n;i++) { 
    printf("array elements after sorting: %d\n",arr2[i]); 
}
printf("minimum value is: %d\n",arr2[0]); 
printf("maximum value is: %d\n",arr2[n-1]);   
}

int main() 
{ 
int size;
printf("Enter the size of array:"); 
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){ 
printf("Enter the array input [%d]:\n",i); 
scanf("%d",&arr[i]); 
}  
for(int i=0;i<size;i++){ 
printf("array inputs before sorting: %d\n",arr[i]); 
}  
printf("\n"); 
MinMax(arr,size);  
display(arr,size);
} 
