# include <stdio.h>

int main()
{
    int num;
    printf("Please input your number");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }


    
    return 0;
}