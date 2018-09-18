#include<stdio.h>
int main()
{

    int n,fib1=0,fib2=1,fib3=0,i;
    printf("enter n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        if(n<=i)
            fib3=i;
        else
        {
            printf("fibonacci series are %d \n",fib3);
            fib3=fib1+fib2;
            fib1=fib2;
            fib2=fib3;
    }

    }


    return 0;
}
