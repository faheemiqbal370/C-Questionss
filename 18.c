//Find factorial of a number entered by the user
#include <stdio.h>

int main() 
{
  int i,fact,n;
  fact =1;
  printf("Enter the number to get its factorial\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      fact=fact*i;
    }
  printf("%d",fact);
  return 0;
}