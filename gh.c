//w. a c p. count the digit of an whole nummmmm
 #include<stdio.h>
 int main()
 {
 	int n,i=1,r,s=0;
 	printf("enter a digit:");
 	scanf("%d",&n);
 	while(n>=i)
 	{
 	    s=n%10;
        n=n/10;
 		i++;
	 }
 	printf("count of the num: %d\n",i);
 	return 0;
 }
