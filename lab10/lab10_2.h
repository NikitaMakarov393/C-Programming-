#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct complex
{
    int mch;
    int dch;
};
int complex_sum(struct complex x, struct complex y);
int complex_kv(struct complex x, int g);
int complex_proizved(struct complex x, struct complex y);
int complex_raznost(struct complex x, struct complex y);