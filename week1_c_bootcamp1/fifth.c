# include <stdio.h>

int main()
{
    float a;
    float b;
    printf("Please enter your numbers \n");
    scanf("%f", &a);
    scanf("%f", &b);
    float c = a + b;
    printf("The sum of %f and %f is %f", a, b, c);
    return 0;

}