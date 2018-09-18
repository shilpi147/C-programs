#include <stdio.h>
int main()
{
    int i, n, f1 = 0, f2 = 1, f3;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d\t", f1);
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return 0;
}
