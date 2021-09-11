//Accept one number from user and print that number of * on screen.

#include<stdio.h>

void Display(int iNo1)
{
	for(int i=0;i<iNo1;i++)
	{
		printf("*\t");
	}
}
int main()
{
	int iValue1=0;
	
	printf("Enter no\n");
	scanf("%d",&iValue1);
	
	Display(iValue1);
	
	return 0;
}