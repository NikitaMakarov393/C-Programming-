#include <stdio.h>
#include <stdlib.h>
#define N 10
//Функция сортировки методом пузырька элементов массива по убыванию
int bubbleSort(int y, int *MASS){
    int PZ;
    for(int i = 0; i < y; i++){
        for(int j = 0;j < y - 1 - i ; j++){
            PZ = MASS[j+1];

            if (MASS[j] < MASS[j+1]){
                MASS[j + 1] = MASS[j];
                MASS[j] = PZ;
            }
        }
    }
}
//Функция вычисления суммы простых элементов массива MASS
int SummOfMassCommonNumber(int *MASS){
    int k = sizeof(MASS);
    int summcounter = 0;
    for(int i = 0; i < k; i++){
        int counter = 0;
        for(int l = 2; l < MASS[i];l++){
            if (MASS[i] % l == 0){
                counter++;
            }
        }
        if (counter == 0){
            summcounter += MASS[i];
        }
    }
    return summcounter;
}
int main(){
    int *X =(int*)malloc(N*sizeof(int));
    int *Y =(int*)malloc((N+1)*sizeof(int));
for(int i = 0; i < N; i++){
    X[i] = rand() % 100 + 1;
}  
printf("\nМассив до добавления элемента: ");
bubbleSort(N,X);
for(int i = 0; i < N; i++){
    printf("%d ", X[i]);
} 
printf("\nМассив после добавления элемента: ");
for(int i = 0; i < N+1; i++){
    if( i == sizeof(X)+1){
        Y[i] = rand() % 100 + 1;
    }else
        {Y[i] = X[i];
    }
}  
bubbleSort(N+1,Y);
for(int i = 0; i < N+1; i++){
    printf("%d ", Y[i]);
}  
printf("\n");
double sr = SummOfMassCommonNumber(Y)/sizeof(Y);
printf("Сумма простых чисел массива: %.2f\n", sr);
}
