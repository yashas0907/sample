#include <stdio.h>
int n;

void main()
{
    printf("Enter a number here\n");
    scanf("%d",&n);
    if(n%2==0){
        printf("the number %d is even",n);
    }
    else
    {
        printf("the number %d is odd",n);
    }
    
}