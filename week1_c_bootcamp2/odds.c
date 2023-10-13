#include <stdio.h>

int main()
{
    int a = 1, i = 0;
    for (i = 1; i <= 10; i+=1)
    {
        printf("%d\n", a);
        a+=2;
    }
    return 0;
}