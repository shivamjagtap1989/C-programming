#include<stdio.h>
 int main()
 {
 	int i, n, c;
 	int a = 0;
 	int b = 1;
 	
 	printf("Enter Number of Termsn : \n");
 	scanf("%d", &n);
 	
 	printf("The Fibonacci Series :");
 	
 	printf("%d %d", a, b);
 	
 	for(i=3;i<=n;i++)
 	{
 		c=a+b;
 		printf("%d", c);
 		a=b;
 		b=c;
	 }
	 return 0;
 }
