#include<stdio.h>
 int product(int, int);
int main()
{
	int a, b, result;
	
	printf("Enter Two Numbers :\n");
	scanf("%d %d", &a, &b);
	
	result = product(a, b);
	
	printf("Ther Product is = %d", result);
	  return 0;
}
  int product(int x, int y){
  	return x*y;
  }
