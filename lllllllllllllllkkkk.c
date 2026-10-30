//write a c program to check either a number is perfect or not
#include<stdio.h>
int main()
{
	int i,n,f=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			f=f+i;
		}
		
	}
	if(f==n){
		printf("it is a perfect number");
	}
	else
	{
		printf("it is  not a perfect number");
	}
	return 0;
}
