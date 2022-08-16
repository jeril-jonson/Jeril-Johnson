#include<stdio.h>
int main()
{
int i,a[20],n,sum=0;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter n elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
 sum=sum+a[i];
}
  printf("the required sum is \n%d",sum);
  return 0;
  }
  
