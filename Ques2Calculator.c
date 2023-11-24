#include<stdio.h>
int main()
{
int num1, num2, res;
printf("Enter any Two Number: ");
scanf("%d%d",&num1 , &num2);
res=num1+num2;
printf("\nAddition = %d", res);
res=num1-num2;
printf("\nSubstraction = %d", res);
res=num1*num2;
printf("\nMultiplication = %d", res);
res=num1/num2;
printf("\nDivision = %d", res);

return 0;

}