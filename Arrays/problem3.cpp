// Write a program to swap adjacent elements in array;

#include<stdio.h>
void swap(int *a ,int *b)
{
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}
void swapAdjacent(int *p,int n)
{
   for(int i=0;i<n-1;i=i+2)
   {
       swap(&p[i],&p[i+1]);
   }
}

int main()
{
   int p[5]={10,20,30,40,50};
   
   int n=sizeof(p)/sizeof(p[0]);
   swapAdjacent(p,n);
   for(int i=0;i<n;i++)
   {
      printf("%d ",p[i]);     
   }
    return 0;
}