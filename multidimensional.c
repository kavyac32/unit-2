#include<stdio.h>
int main()
{
	int example[2][2][2]={
	{
		{1,2,3},{4,5,6},{7,8,9},{10,11,12}
	},
	{
		{13,14,15},16,17,18},{19,20,21},{22,23,24}
		}
	 };
	for(int i=0;i<2;i++)
	{
		printf("block %d:\n",i+1);
		for(int j=0;j<4;j++){
			for(int k=0;k<3;k++){
				printf("%d",example[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}