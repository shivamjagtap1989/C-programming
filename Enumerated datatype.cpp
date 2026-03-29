#include<stdio.h>
enum day{Sun, Mon, Tue, Wed, Thur, Fri, Sat};
int main()
{
  enum day d;
  d = Wed;
  printf("Value of d = %d\n", d);	
	return 0;
}
