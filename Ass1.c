#include<stdio.h>
int main()
{
    int r,Area,circumference;
printf("Enter the Radius of circle: ");
scanf("%d", &r);
Area = 3.14*r*r;
printf("Area of circle is %d", Area);
circumference =2*3.14*r ;
printf("\ncircumference of circle is %d", circumference);
return 0;
}
