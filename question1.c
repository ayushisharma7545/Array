/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
 void swap(int arr[],int a,int b)
   {
       int c=arr[a];
       arr[a]=arr[b];
       arr[b]=c;
   }
   int*revarray(int n)
   {
       int*arr=(int*)(malloc(sizeof(int)*n));
       printf("Enter the elements in an array:");
        
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
       printf("The values store into the array are: ");
        for(int i=0;i<n;i++) 
        {
            printf("%d",arr[i]);
        }
         for(inti=0;i<n;i++)
         {
             swap(arr,i,n-i-1);
         }
           return arr;
   }
   int main()
   {
       int*n;
       int num;
       printf("The number of elements to store in an array:");
       scanf("%d,&num");
       n=revarray(num);
         printf("\n the value store into the array in reverse:");
          for(inti=0;i<num;i++)
           {
               printf("%d",n[i]);
               
           }
             return 0;
             
   }
           
   
   
 
