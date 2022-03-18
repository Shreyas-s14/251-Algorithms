// mergesort program
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,n,*a,*b,*c;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(n*sizeof(int));
    c=(int*)malloc(n*sizeof(int));
    printf("Enter the elements\n");
    input_array(a,n);
    mergesort(a,b,c,0,n-1);
    printf("The sorted array is\n");
    output_array(a,n);
    return 0;
}
void input_array(int *a, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void output_array(int *a, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
void mergesort(int *a, int *b, int *c, int l, int r)
{
    int m;
    if(l<r)
    {
        m=(l+r)/2;
        mergesort(a,b,c,l,m);
        mergesort(a,b,c,m+1,r);
        merge(a,b,c,l,m,r);
    }
}
void merge(int *a, int *b, int *c, int l, int m, int r)
{
    int i,j,k;
    i=l;
    j=m+1;
    k=l;
    while(i<=m && j<=r)
    {
        if(a[i]<=a[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=m)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<=r)
    {
        c[k]=a[j];
        j++;
        k++;
    }
    for(i=l;i<=r;i++)
    {
        a[i]=c[i];
    }
}


