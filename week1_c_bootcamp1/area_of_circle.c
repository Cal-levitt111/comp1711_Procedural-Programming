# include <stdio.h>

int main()
{
    int radius;
    float pi = 3.14159;
    printf("Please input the radius");
    scanf("%d", &radius);
    float area = pi*(radius*radius);
    printf("the area of the circle is %f", area);

    
    return 0;
}