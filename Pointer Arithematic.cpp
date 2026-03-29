#include<stdio.h>
  int main()
  {
  	int arr[5] = {10,20,30,40,50};
  	int *ptr;
  	
  	ptr = arr;  
  	printf("Initial value : %d\n", *ptr);
  	
  	ptr++;                           //move to next element
  	printf("After ptr ++ : %d\n", *ptr);
  	
  	ptr--;                          //move back
  	printf("After ptr -- : %d\n", *ptr);
  	
  	ptr = ptr - 2;                 //Jump Two Elemnts
  	printf("After ptr -2 : %d\n", *ptr);
  	
  	ptr = ptr - 1;                //Move Back 1 Element
  	printf("After ptr -1 : %d\n", *ptr);
  	
  	return 0;
  }
