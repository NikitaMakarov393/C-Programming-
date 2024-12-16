#include "lab10_2.h"
int main(){
    struct complex a;
    a.dch = rand() % 10 - 5;
    a.mch = (rand() % 10 - 5) * (-1);
    struct complex b;
    b.dch = rand() % 30 - 15;
    b.mch = (rand() % 30 - 15) * (-1);
    struct complex c;
    c.dch = rand() % 100 - 50;
    c.mch = (rand() % 100 - 50) * (-1);
    printf("a = %d + %d\nb = %d + %d\nc = %d + %d\n", a.dch, a.mch, b.dch, b.mch, c.dch, c.mch);
    printf("Z = a ** 2 * (b + c) - c * b = %d\n ", complex_kv(a, 2) * complex_sum(b, c) - complex_proizved(c, b));
}