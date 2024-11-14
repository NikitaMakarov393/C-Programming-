#include <stdio.h>

void main()
{
int s;
int n;
int a;
printf("input int number: ");
scanf("%d",&a);
for (s=0,n=2;n<a;n++){
if(a%n==0)s++;}
if (s==0) puts("Good");//если число а нечетное выводит Good
}
