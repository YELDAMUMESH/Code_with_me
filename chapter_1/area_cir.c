// Area of circle = πr*r
//Volume of cylinder = πr*r*h


#include<stdio.h>
int main()
{


    float r,h;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    printf("Area of circle is %f\n",3.14*r*r);
    printf("Enter height of the cylinder: ");
    scanf("%f",&h);
    printf("Volume of cylinder is %f\n",3.14*r*r*h);

return 0;
}