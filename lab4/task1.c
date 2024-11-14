#include <stdio.h>
#include <math.h>

void main(){
int n;
	printf("input number: ");

	scanf("%d", &n);
int k = pow(n,2);;
int c;
int j=1;
int o = n;
while (n <= k)
	{c = o;
	for(;(c>0);c--){
			printf("%d ", j++);
			n++;
			}
	printf("\n");}
}