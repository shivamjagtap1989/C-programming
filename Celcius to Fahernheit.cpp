#include<Stdio.h>
   int main()
   {
   	float fahren, celcius;
   	
   	printf("Enter Temperature in Celcius : \n");
   	scanf("%f", &celcius);
   	
   	fahren = (celcius * 9/5) + 32;
   	
   	printf("Fahernheit = %.2f", fahren);
   	
   	return 0;
   }
