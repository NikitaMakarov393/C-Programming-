#include <stdio.h>

void main()
{
int b;
int a;
int k = 0;
	do{
	printf("input positive number: ");
	scanf("%d", &a);
	}while(a<0);
int d = a;
	printf("Number of unit bits - ");
		for(;d!=0;){
	b = d & 1;
	d= d >> 1;
	if (b==1)
		k++;
	}
	// 10001 >>1
printf("%d\n",k);
}
