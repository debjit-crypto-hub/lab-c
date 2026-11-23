#include<stdio.h>
int main(){
	int n,i;
	printf("size of arry");
	scanf("%d",&n);
	int a[n];
	printf("enter the value");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
