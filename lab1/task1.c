#include <stdio.h>

void main()
{
int a;
	printf("Enter year:");
	scanf("%d", &a);
if (a%400==0)
 {

	printf("Yes\n");
	a%=400;
 }else if (a%100==0)
  {
	printf("No\n");
	a%=100;
  }else if (a%4==0)
   {
	printf("Yes\n");
   } else printf("No\n");
}
