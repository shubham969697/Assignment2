//Accept one number from user and print that number of * on screen using while loop.

#include<stdio.h>

void Display(int iNo1)
{
	while(iNo1>0)
	{
		printf("*\t");
		iNo1--;
	}

	/*
		while(iNo1!=0)
	{
		printf("*\t");
		iNo1--;
	}

	
	*/
}
int main()
{
	int iValue1=0;
	
	printf("Enter no\n");
	scanf("%d",&iValue1);
	
	Display(iValue1);
	
	return 0;
}