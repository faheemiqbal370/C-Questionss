//Find all the factors of a natural number
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter any number ");
    scanf("%d",&n);
    printf("Factors of %d are\n",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d",i);
    }
    printf("\n");
    return 0;
}   