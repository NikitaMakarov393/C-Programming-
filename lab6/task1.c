#include <stdio.h>
#include <stdlib.h>

int main(){
int k;
int l;
int g = 0;
float sr = 0;
int A[6];
int B[6];
int C[6];
printf("A = { ");
for(int i = 0;i<6;i++){
    A[i] = rand() % 10 - 5;
    B[i] = rand() % 10 - 5;
    printf("%d ", A[i]);
}
printf("}\nB = { ");
for(int i = 0;i<6;i++){
    printf("%d ", B[i]);
}
printf("}\nC = { ");
for(int i = 0;i<6;i++){
    C[i]=A[i]+B[i];
    printf("%d " , C[i]);

}
for(int k = 0; k < 4; k++){
    if ((k % 2) == 0){
    if (A[k]<A[k+2]){
        g = A[k+2];
    }else{
        g = A[k];
    }
}
}
printf("}\n");
printf("Максимальная реальная часть массива A: %d\n", g);
for(int k = 0; k < 6; k++){
    if ((k % 2) != 0 && B[k] < 0){
            l++;
}
}
printf("Колличество мнимых частей массива B меньших 0: %d \n", l);
for(int k = 0; k < 6; k++){
    sr += C[k];
}
printf("Среднее значение всех элементов массива C: %.2f \n",sr/6);
}