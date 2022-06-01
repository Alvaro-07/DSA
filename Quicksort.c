#include<stdio.h>
#include<conio.h>
void main()
{

 void quicksort(int a[],int lb,int ub)
 {
   int loc;
   if(lb<ub)
   {
    partition_array(a, loc,ub,&loc);
    quicksort(a,lb,loc-1);
    quicksort(a,loc+1,ub);
   }

 }
}
  void partition_array(int a[],int bag, int up,int (*loc))
  {
   int left,right,lump,done;
   *loc = left = beg;
   right = end;
   done = 0;
   while(!done)
   {
    while((a[*loc]<=a[right]) && (*loc!=right))
    right--;
    if(*loc==right)
    done =1;
    else if(a[*loc]>a[right])
    {
     temp = a[*loc];
     a[*loc]= a[right]
     a[right]= temp;
     *loc = right;
    }
     if(!done)
     {
     while((a[*loc]>=a[left]&& *loc!=left))
     left++;
     if(*loc==left)
     done =1;
     else if
     {
     temp = a[*loc];
     a[*loc]=a[left];
     a[left]=temp;
     *loc = left;
      getch();
     }
     }
   } //while
  }//function
