#include<stdio.h>
int main()
{
	char name[20];
	int age,marks;
	printf("enter name:");
	scanf("%s",name);
	printf("enter age:");
	scanf("%d",&age);
	printf("enter marks:");
	scanf("%d",&marks);
	printf("\nstudents details:\n");
	printf("name:%s|age:%d|marks:%d\n",name,age,marks);
	return 0;
}