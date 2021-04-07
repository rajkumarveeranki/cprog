#include<stdio.h>
int main()
{
int a[50],i,n;
printf("\nenter sizeof array:");
scanf("%d",&n);
printf("\nenter %d elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nthe array elements are:");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}
