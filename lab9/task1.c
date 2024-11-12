// Вариант 14
#include <stdio.h>
#include <stdlib.h>
// функция для формирования целочисленной матрицы NxN
int ** mat(int *N){
    do{
        printf("Введите размер матрицы: ");
        scanf("%d", N);
    }while(*N <= 0);
    int **MATRIX=(int**)malloc(*N*sizeof(int*));
    if (MATRIX != NULL){
        for(int i = 0; i < *N;i++){
            MATRIX[i]= (int*)malloc(*N*sizeof(int));
            for(int j = 0; j < *N; j++){
                *(*(MATRIX+i)+j)=rand() % 100 - 50;
                printf("%d ", *(*(MATRIX+i)+j));
            }
            printf("\n");
        }
    }
    return MATRIX;
}
// функция сортировки элементов матрицы методом пузырька и поиск столбца с максимальным числом перемещений
int bubbleSort(int N, int **MATRIX){
    int max_replace_count = 0;
    int max_replace_column = 0;
    for(int i = 0; i < N;i++){
        int replace_count_1 = 0;
        for(int j = 0; j < N;j++){
            for(int k = 0;k < N-j-1;k++){
                if (*(*(MATRIX+k)+i) < *(*(MATRIX+(k+1))+i)){
                    replace_count_1++;
                    int PZ = *(*(MATRIX+(k))+i);
                    *(*(MATRIX+k)+i) = *(*(MATRIX+(k+1))+i);
                    *(*(MATRIX+(k+1))+i) = PZ;
                }
            }
        }
        if (replace_count_1 > max_replace_count){
            max_replace_count = replace_count_1;
            max_replace_column = i;
        }
    }
    return max_replace_column;
}
// запиcь всеx элементов диагонали матрицы MATRIX в одномерный массив diagonal_arr, после функция переписывает элементы диагонали MATRIX в обратном порядке из созданного массива и выводит ее на экран
void diagonal_reverse(int N, int **MATRIX){
    int *diagonal_arr = (int*)malloc(N*sizeof(int));
    if (diagonal_arr != NULL){
        for(int i = 0; i < N; i++){
            *(diagonal_arr + i) = *(*(MATRIX + i) + i);
        }
        for(int i = 0; i < N; i++){
                *(*(MATRIX+i)+i) = *(diagonal_arr+(N-1-i)); 
        }
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                printf("%d ", MATRIX[i][j]);
            }
            printf("\n");
        }
        free(diagonal_arr);
        diagonal_arr = NULL;
    }
}

//функция для вычисления суммы положительных элементов столбца с максимальным числом перемещений в течении сортировки методом пузырька
int max_replace_column_sum(int N, int max_replace_column,int **MATRIX){
    int sum_counter = 0;
        for( int j = 0;j < N; j++){
            if(*(*(MATRIX+j)+max_replace_column) > 0){
                sum_counter += *(*(MATRIX+j)+max_replace_column);
            }
        }
    return sum_counter;
}


int main(){
    int N;
    int **matrix = mat(&N);
    if (matrix == NULL) { 
        printf("Не удалось выделить память для матрицы.\n");
        return 1;
    }
    printf("Сумма положительных элементов столбца");
    printf(" с максимальным числом перемещений: %d\n", max_replace_column_sum(N, bubbleSort(N, matrix), matrix));
    printf("Матрица после сортировки элементов каждой ее строки по убыванию:\n");
    for( int i = 0;i < N;i++ ){
        for( int j = 0; j < N;j++){
            printf("%d ", *(*(matrix+i)+j));
        }
        printf("\n");
    }
    printf("Матрица после переворота диагонали:\n ");
    diagonal_reverse(N, matrix);
    for(int i = 0; i < N; i++) {
        free(matrix[i]);
    }
    free(matrix);
    matrix = NULL;
}
