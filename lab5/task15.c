#include <stdio.h>

void main(){
unsigned int x;
unsigned int y;
char i;
char j;
int a;
int b;
do{
	printf("input two positive numbers: ");
	scanf("%u%u", &x , &y);
	}while(x<0 && y<0);
do{
    printf("Input i bit and j bit: ");
    scanf("%hhd%hhd", &i ,&j);
}while(i<0 && i>=32 && j<0 && j>=32);
x = x >> (i-1);
a = x & 1;
b = a << (j-1);
y = y | b;
    printf("%u\n", y);
}
// 10101