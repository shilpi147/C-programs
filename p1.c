#include<stdio.h>
int rev(long int n)
{
    if(n<=9)
    return 1;
    return 1+rev(n/10);
}
 int main()
 {

     printf("%ld",rev(23));
 }
