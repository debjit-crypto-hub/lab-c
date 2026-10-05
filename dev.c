//w.a c p. to find a sum of the digit of a whole number
 #include<stdio.h>
 int main()
 {
 	int i=1,n,d=0,num=0;
 	printf("enter a digit:");
 	scanf("%d",&n);
 	while(n>=i)
 	{
 		num=n%10;
 		d=d+num;
 		n=n/10;
	 }
 	printf("the sum of digit:%d\n",d);
 	
 	

 	return 0;
 }
