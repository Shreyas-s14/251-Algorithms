// mergesort program
#include<stdio.h>
#include<stdlib.h>
void inp_arr(int *,int);
void merge(int *,int,int,int);
void mergesort(int *,int,int);
int main()
{
    int i,n,*a;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("Enter the elements\n");
    inp_arr(a,n);
    mergesort(a,0,n-1);
    printf("The sorted array is\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
void inp_arr(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void mergesort(int *a,int l,int r)
{
    int m;
    if(l<r)
    {
        m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
void merge(int *a,int l,int m,int r)
{
    int i,j,k,n1,n2,*b;
    n1=m-l+1;
    n2=r-m;
    b=(int *)malloc(n1*sizeof(int));
    for(i=0;i<n1;i++)
        b[i]=a[l+i];
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(b[i]<=a[m+1+j])
        {
            a[k]=b[i];
            i++;
        }
        else
        {
            a[k]=a[m+1+j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=b[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=a[m+1+j];
        j++;
        k++;
    }
}