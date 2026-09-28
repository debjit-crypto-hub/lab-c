//
 #include<stdio.h>
 int main()
 {
 	int n,i=1,s=0,term=2;
 	printf("enter a value : \n");
 	scanf("%d",&n);
 	while(n>=i)
 	{
 		s=s+term;
 		term=term+3;
 		i++;
	 }
	 printf("the sum of series:%d\n",s);
 	return 0;
 }
