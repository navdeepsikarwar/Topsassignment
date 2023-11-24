#include<stdio.h>
int main()
{

float a ;
float surfacearea,volume;
printf("Enter size of any side of cube :  ");
scanf("%f", &a );

surfacearea = 6 * (a * a);
volume = a * a * a ;
printf("Surface area of cube is : %f%f%f",surfacearea);
printf("\nVolume of cube is : %f%f%f",volume);

}