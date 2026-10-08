#include <stdio.h>

int get_integer(void);
int factorial(int n);
int combination(void);

int main(void)
{
    int result;

    result = combination();

    printf("Combination = %d\n", result);

    return 0;
}

int combination(void)
{
    int n;
    int r;
    int result;

    printf("n을 입력하세요: ");
    n = get_integer();

    printf("r을 입력하세요: ");
    r = get_integer();

    result = factorial(n) / (factorial(n - r) * factorial(r));

    return result;
}

int factorial(int n)
{
    int res = 1;
    int i;

    for (i = 1; i <= n; i++)
        res = res * i;

    return res;
}

int get_integer(void)
{
    int n;

    scanf("%d", &n);

    return n;
}