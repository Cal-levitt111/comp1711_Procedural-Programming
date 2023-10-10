# include <stdio.h>

int main()
{
    int length, width;
    printf("Please input the length rectangle \n");
    scanf("%d", &length);
    printf("Please input the width rectangle \n");
    scanf("%d", &width);
    int area = length * width;
    printf("The area of your rectangle is %d", area);
    return 0;
}