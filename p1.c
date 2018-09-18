#include<stdio.h>
int rev(int n)
{
    if(n==0)
    return 0;
    return 1+rev(n/10);
}
 int main()
 {

     printf("%d",rev(2334));
 }
