#include <stdio.h>

void main()
{
	int i;
	int a;
	printf("Input int number: ");
	scanf("%d",&a);
for(i=2;i<a;i++){
if (a%i==0) break;}
if (i==a)puts("Good");//пишет Good если число простое
}
