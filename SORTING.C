#include<stdio.h>
#include<conio.h>
void bubbleSort(int arr[],int n);
void insertionSort(int arr[],int n);
void bucketSort(int arr[],int n);
void main()
{
 int i,n,arr[20];
 clrscr();
 printf("Enter he size of an array:\n");
 scanf("%d",&n);
 printf("Enter the elements of an array:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 //bubbleSort(arr,n);
//  insertionSort(arr,n);
  bucketSort(arr,n);
  printf("Sorted Array is:\n");
  for(i=0;i<n;i++)
 {
  printf("%d",arr[i]);
 }

  getch();
}
void bubbleSort(int arr[],int n)
{
 int i,j,temp;
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-1;j++)
  {
   if(arr[j]>arr[j+1])
   {
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
   }
  }
 }
}
void insertionSort(int arr[],int n)
{
 int i,j,temp;
 for(i=0;i<n-1;i++)
 {
   for(j=i;j>0&&arr[j-1]>arr[j];j--)
   {
     temp=arr[j];
    arr[j]=arr[j-1];
    arr[j-1]=temp;
   }
  }
 }
void bucketSort(int arr[],int n)
{
  int i,j;
  int count[4];
  for(i=0;i<n;i++)
   count[i]=0;
  for(i=0;i<n;i++)
   (count[arr[i]])++;
  for(i=0,j=0;i<n;i++)
   for(;count[i]>0;(count[i])--)
     arr[j++]=i;
   }
