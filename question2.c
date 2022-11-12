/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<conio.h>
 int sum_of_array(int a[], int n)
 {
     int i,sum=0;
     for(i=0;i<n;i++)
     {
        sum+=a[i];
     }
       return sum;
 }
 int main()
 {
     int a[100],i,n,sum;
     printf("Enter the size of the array :");
     scanf("%d",&n);
     printf("Enter elements in array:");
         
     
        for(i=0; i<n;i++)
        {
    scanf("%d", &a[i]);
}
  sum =sum_of_array(a,n);
    printf("sum of array is: %d",sum);

}
 
