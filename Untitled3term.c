#include<stdio.h>
 int main()
 {
 	int n,i=1,s=0,a=0,b=1;
 	printf("enter a value: \n");
 	scanf("%d",&n);
 	while(n>=i)
 	{
 		printf("%d\t",a);
 		s=a+b;
 		a=b;
 		b=s;
 		i++;
	 }
 	
 	
 	
 	
 	
 	return 0;
 }
