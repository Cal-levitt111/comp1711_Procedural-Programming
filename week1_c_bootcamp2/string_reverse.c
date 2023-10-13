#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char hello[6] = "Hello";
    for (i = strlen(hello)-1; i >= 0; i--)
    {
        printf("%c\n", hello[i]);
    }
    return 0;
}