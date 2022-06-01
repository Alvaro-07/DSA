#include<stdio.h>
#include<conio.h>
void main()
{
int arr[100];
int i,n,search;
printf("Enter the size  of an array:\n");
scanf("%d",&n);
printf("Enter the elements of an array:\n");
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
printf("Enter the elements to be searched:\n");
scanf("%d",&search);
for(i=0;i<n;i++)
{
 if(arr[i]==search)
 {
  printf("Element is found at index %d",i);
  break;
 }
}
if(n==i)
{
 printf("Element not found");
}
getch();
}
