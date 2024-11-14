#include <stdio.h>
#include <stdlib.h>
// функция заполнения матрицы методом улитки
int snail_matrix(int n){
    int matrix[n][n];
    for(int k = 0; k < n / 2; k++){
        for(int i = k; i < n - k; i++){
            matrix[k][i+k] = 1;
        }
        for (int i = 1 + k; i < n - k; i++){
            matrix[i][i+k] = 2;
        }
        for (int i = n - 2 - k; i >= 0; i--){
            matrix[n-k][i] = 3;
        }
        for (int i = n - 2 - k; i >= 1; i--){
            matrix[i][k] = 4;
        }
    }
    for( int i = 0; i < n; i++){
        for(int j = 0; j < n;j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int N;
    printf("Введите размер квадратной матрицы: " );
    scanf("%d", &N);
    printf("Матрица сформированная методом улитки:\n");
    snail_matrix(N);
}