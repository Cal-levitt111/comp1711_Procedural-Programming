# include <stdio.h>

int main()
{
    int a = 10;
    int b = 15;

    int temp = a;
     a = b;
     b = temp;

    printf("A is %d and b is %d", a, b);
    return 0;
}