#include<stdio.h>
int main()
{
	float a,b;
	printf("enter two numbers:");
	scanf("%f %f",&a,&b);
	printf("sum=%2f\n",a+b);
	printf("difference=%2f\n",a-b);
	printf("product=%.2f\n",a*b);
	return 0;	
}