#include <stdio.h>

void main()
{
int i;
int n1;
int n2;
printf("Input two int numbers: ");
scanf ("%d%d",&n1,&n2);
for( i=n1;!(n1%i==0 && n2% i==0);i--);
if (n1%i==0 && n2%i==0) printf("НОД %d и %d =%d", n1 , n2 , i);

}
