//Accept number from user and check whether number is even or 
//odd. 

#include<stdio.h>
typedef int bool;

#define TRUE 1
#define FALSE 0

bool Even_Odd(int iNo1)
{
	if(iNo1 % 2 == 0)
	{
		//printf("Even no\n");
		return TRUE;
	}
	else
	{
		//printf("Odd no\n");
		return FALSE;
	}
}
int main()
{
	int iValue1=0;
	bool iRet=FALSE;
	
	printf("Enter the no\n");
	scanf("%d",&iValue1);
	
	iRet=Even_Odd(iValue1);
	if(iRet==TRUE)
	{
		printf("Even no\n");
	}
	else
	{
		printf("Odd no\n");
	}
	return 0;
}