#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int gd = 1;
    int pd = 1;
    int k = 0;
    int opred = 0;
    do{
        printf("Введите размер квадратной матрицы размера n*n(1<=n<=3): ");
        scanf("%d", &n);
    }while(n>3 || n<1);
    int MATRIX[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0;j < n; j++){
            MATRIX[i][j] = rand() % 10 - 5; // заполнение матрицы произвольными элементами
            printf("%d ", MATRIX[i][j]);
        }
        printf("\n");
    }
    if ( n = 1){        // определитель для матрицы 1x1
        opred = MATRIX[0][0];
    }else{
        for(int i = 0; i < n;i++){   
            gd = 1;
            pd = 1;     
                for (int j = 0;j < n;j++){
                    if(j+i >= n){
                        gd*=MATRIX[i+j-n][j];
                    }else{
                        gd *= MATRIX[j+i][j];       //Вычисление положительных произведений элементов матрицы
                    }
                }
            opred+=gd;
                for (int k = 0;k < n;k++){
                    if(i-k < 0){
                        pd *= MATRIX[(i-k)+n][k]; 
                    }else{
                        pd *= MATRIX[i-k][k];       //Вычисление отрицательных произведений элементов матрицы
                    }
                }
            opred-=pd;
        }
    }
    printf("Определитель заданной матрицы = %d\n", opred);
}