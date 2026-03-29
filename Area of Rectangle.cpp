#include<stdio.h>
   int main()
   {
   	float length, breadth, area;
   	
   	printf("Enter the Length of Rectangle : \n");
   	scanf("%f", &length);
   	
   	printf("Enter the Breadth of Rectangle : \n");
   	scanf("%f", &breadth);
   	
   	area = length * breadth;
   	
   	printf("The Area of Rectangle = %.2f", area);
   	
   	return 0;
   }
