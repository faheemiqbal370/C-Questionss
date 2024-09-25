//C Program to swap two integers using pointers and function(call-by-reference)
#include<stdio.h>
void swap(int *r,int *s)
{
  int temp;
  temp = *r;
  *r=*s;
  *s=temp;
}
   
int main()
{

  int x,y;
  printf("Enter the two integers\n");
  scanf("%d %d",&x,&y);
 
  printf("The values before the swapping are %d  %d\n",x,y);
  swap(&x,&y);
  printf("The values after the swapping are %d  %d\n",x,y);
  return 0;
}