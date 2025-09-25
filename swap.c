#include<stdio.h>
int main()
{
	int x=5,y=10;
	printf("before swap:x=%d,y=%d\n",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("after swap:%d,y=%d\n",x,y);
	return 0;
}