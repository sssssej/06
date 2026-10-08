#include <stdio.h>

int sumTwo(int a, int b)
{
    return a + b;
}

int square(int n)
{
    return n * n;
}

int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main(void)
{
    int result1;
    int result2;
    int result3;

    result1 = sumTwo(10, 20);
    result2 = square(5);
    result3 = get_max(15, 25);

    printf("sumTwo: %d\n", result1);
    printf("square: %d\n", result2);
    printf("get_max: %d\n", result3);

    return 0;
}