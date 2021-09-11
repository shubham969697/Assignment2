/*
	Accept two numbers from user and display first number in second 
number of times. 
Input : 12 5 
Output : 12 12 12 12 12 

*/

#include<stdio.h>

void Display(int iNo1,int iNo2)
{
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	for(int i=0;i<iNo2;i++)
	{
		printf("%d\t",iNo1);
	}
	
}
int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter two no\n");
	scanf("%d%d",&iValue1,&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}