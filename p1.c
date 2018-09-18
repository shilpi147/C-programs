#include<stdio.h>
int rev(long int n)
{
    if(n==0)
    return 0;
    return 1+rev(n/10);
}
 int main()
 {

     printf("%ld",rev(1000000000000000));
 }
