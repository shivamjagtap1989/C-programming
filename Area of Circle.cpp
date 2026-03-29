#include<stdio.h>
#define PI 3.14
  int main()
  {
  	float radius, area;
  	
  	printf("Enter the Radius of Circle : \n");
  	scanf("%f", &radius);
  	
  	area = PI * radius * radius;
  	
  	printf("The Area of Circle = %.2f", area);
  	
  	return 0;
}
