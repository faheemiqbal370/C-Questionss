//C Program to check whether a string is a Palindrome or not using Pointers 
#include<stdio.h>
int main()
{
    char str[50],*p,*q;
    int flag=1;
    printf("Enter the string\n");
    scanf("%s",str);
    p = str;
    q = p;
    while(*p!='\0')
        p++;
    p--;
    while(q<p)
        {
            if(*p!=*q)
            {
                printf("The %s is not a Palindrome",str);
                flag=0;
            }
            q++,p--;
        } 
        if(flag==1)
        {
            printf("The %s is a Palindrome",str);
        }       
    
    return 0;
}