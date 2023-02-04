#include<stdio.h>
int arm(int);
main()
{
    int n,sum;
    printf("Enter the number:\n");
    scanf("%d",&n);
    sum=arm(n);
    if(sum==n)
    {
        printf("Armstrong number\n");
    }
    else
        printf("Not an Armstrong number\n");
}
int arm(int n)
{
    int ld,sum=0;
    while(n!=0)
    {
        ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;
    }
    return sum;
}
