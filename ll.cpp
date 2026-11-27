//w a c p to find the largest number in an array 
#include<stdio.h>
int main()
{
	int n,i,m;
	printf("size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter the values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		m=a[0];
	 for(i=0;i<n;i++)
	 {
	 	if(m>a[i])
	 	m=a[i];
	 }
	 printf("%d",m);
	
	return 0;
}

