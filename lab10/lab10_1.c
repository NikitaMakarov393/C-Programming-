#include "lab10_2.h"
int complex_sum(struct complex x, struct complex y){
    return (x.mch + x.dch) + (y.mch + y.dch);
}
int complex_raznost(struct complex x, struct complex y) {
    return (x.mch + x.dch) - (y.mch + y.dch);
}
int complex_proizved(struct complex x, struct complex y){
    return (x.mch + x.dch) * (y.mch + y.dch);
}
int complex_kv(struct complex x, int g){
    return pow((x.mch + x.dch), g);
}