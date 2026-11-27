#include<stdio.h>
int main()
{
	int n,i,k=0,m=0;
	printf("size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter the values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//	m=a[0];
	 for(i=0;i<n;i++)
	 {
	 	m=(m+a[i]);
	 }
	 k=m/n;
	 printf("%d",k);
	
	return 0;
}

