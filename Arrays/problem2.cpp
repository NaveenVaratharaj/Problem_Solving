// Write a program to reverse a array;
#include<stdio.h>


void swap(int *a ,int *b)
{
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}
void swapAdjacent(int *p,int s,int e)
{
   while(s<e)
   {
       swap(&p[s],&p[e]);
       ++s;
       --e;
   }
}

int main()
{
   int p[5]={10,20,30,40,50};
   
   int n=sizeof(p)/sizeof(p[0]);
   swapAdjacent(p,0,n-1);
   for(int i=0;i<n;i++)
   {
      printf("%d ",p[i]);
      
       
   }
    return 0;
}