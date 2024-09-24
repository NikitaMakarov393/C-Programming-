#include <stdio.h>

void main()
{

char b;
float a;

	printf("Input temperature: ");
	scanf("%f%c", &a , &b);

if (b=='c' || b=='C')
 {
	printf("Output temperature: %.1ff\n", ((a * 9 / 5) + 32) );

 }else if (b=='f')
  {
	printf("Output temperature: %.1fc\n", ((a - 32) / 9 * 5));
  }else printf("Outpur error\n");
}
