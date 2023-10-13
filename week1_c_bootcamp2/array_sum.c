#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num_list [6];
    int count;
    int i;
    int sum = 0;

    for (count = 0; count < 5; count++)
    {
        num_list[count] = rand() % 100;
        printf("%d\n", num_list[count]);
    }

    for (i = 0; i < 5; i++)
    {
        sum += num_list[i];
    }
    
    printf("%d", sum);
    return 0;

}
