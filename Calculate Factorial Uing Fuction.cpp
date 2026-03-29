#include<stdio.h>
 int factorial(int x)
 {
 	int i, fact = 1;
 	
 	for(i=1;i<=x;i++)
 	{
 		fact = fact*i;
 		return fact;
	 }
 }
 int main()
 {
 	int n, result;
 	
 	printf("Enter A Number :\n");
 	scanf("%d", &n);
 	
 	result = factorial(n);
 	
 	printf("Factorial = %d", result);
 	
 	return 0;
 }
 
 
