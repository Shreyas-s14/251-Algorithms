//selection sort
#include<stdio.h>
#include<stdlib.h>
void selesort(int *a,int n);
//int *selectionsort(int *a);
void main()
{
    printf("ENter the size of the array:");
    int n;
    scanf("%d",&n);
    int a[n];
    int i=0;
    while(i<n)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&a[i]);// *(a+i)==a[i];
        i++;
    }
    //int *b=selectionsort(a);
    selesort(a,n);
    for(int j=0;j<n;j++)
    {
        printf("%d) %d\n",j+1,(a[j]));
    }

}
void selesort(int *a,int n)
{
     //int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<=n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
            // swap a[i] & a[min]
            int temp;
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}
/*int *selectionsort(int *a)
{
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<+n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
            // swap a[i] & a[min]
            int temp;
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    return a;
}*/