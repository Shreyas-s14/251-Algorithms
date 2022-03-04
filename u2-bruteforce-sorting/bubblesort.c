//bubblesort program in c
#include<stdio.h>
#include<stdlib.h>

void enterele(int *a,int n)
{
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void swapper(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void bubblesort(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swapper(&a[j],&a[j+1]);
            }
        }
    }
    
}
void printarray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d) %d\n",i+1,a[i]);
    }
}
void main()
{
    printf("Enter the size of the array:");
    int n;
    scanf("%d",&n);
    int a[n];
    enterele(a,n);
    bubblesort(a,n);
    printarray(a,n);
}