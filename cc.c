#include<stdio.h>
int main()
{ 
int a=0,b=0,c=1,d,n,i=1;
printf("enter a digit:");
 	scanf("%d",&n);
 	while(i<=n)
 	{
 		printf("%d\t\n",a);
 		d=a+b+c;
 		a=b;
 		b=c;
 		c=d;
 		i++;
 		


	 }
printf("%d\n",d);
return 0;
}
