//Accept on number from user if number is less than 10 then print 
//“Hello” otherwise print “Demo”.

#include<stdio.h>

void Display(int iNo1)
{
	if(iNo1<10)
	{
		printf("Hello\n");
	}
	else
	{
		printf("Demo\n");
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