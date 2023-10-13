#include <stdio.h>

int main()
{
    int a [10];
    int count;

    //populate an array
    for (count = 0; count < 10; count++)
    {
        a[count] = count * 11;
    }
    printf ("The %d elemt and the %d element are %d and %d\n", 5, 6, a[5], a[6]);
    printf ("use pointers instead %d", *(a + 5));
    return 0;

}