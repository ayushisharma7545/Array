#include<stdio.h>
int maximum(int[]);
int minimum(int[]);
int main() 
{
    int a[8],i,n;
    printf("\Enter the 8 numbers");
    for(i=0;i<8; i++)
    scanf("%d",&a[i]);
    
    m=maximum(a);
    printf("\nMaximum = %d,"m);
    
    m=minimum(a);
    printf("\nMinimum = %d,"m);
    return 0;
}
int maximum(int a[])
{
    int i,m= -32567;
    for(i=0;i<8;i++)
    {
        if(a[i>m])
        m=a[i];
    }
    return 0;
}
int minimum(int a[])
{
    int i,m= -32767;
    for(i=0;i<8;i++)
    {
        if(a[i<m]);
        m=a[i];
    }
    return 0;
}
           
   
   
 
