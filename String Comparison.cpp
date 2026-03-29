#include<stdio.h>
#include<string.h>
 int main()
 {
 	char str1[50], str2[50];
 	
 	printf("Enter First String :");
 	scanf("%s", &str1);
 	
 	printf("Enter Second String :");
 	scanf("%s", &str2);
 	
 	if(strcmp(str1, str2)==0)
 	{
 		printf("String are Equal");
	 }
	 else{
	 	printf("String are Not Equal");
	 }
	 return 0;
 }
