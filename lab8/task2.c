#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;
    int gd = 1;
    int pd = 1;
    int opr0 = 0;
    int opr;
    do{
        printf("Введите колличество переменных СЛАУ(2<=n<=3): ");
        scanf("%d", &n);
    }while(n>3 || n<2);
    int MATRIX[n][n+1];
    int R[n][1];
    int G[n][n];
    int XYZ[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0;j < n+1; j++){
            MATRIX[i][j] = rand() % 10 - 5; 			// заполнение СЛАУ произвольными элементами
            printf("%d ", MATRIX[i][j]);
        }
        printf("\n");
    
    }
    for (int i = 0;i < n; i++){
        R[i][0] = MATRIX[i][n];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            G[i][j]=MATRIX[i][j];
        }
    }
    if (n == 2){
            opr0 = G[0][0]*G[1][1]-G[0][1]*G[1][0];                 //Вычисление определителя системы opr0 для СЛАУ с 2 неизвестными
    }else{
        for(int q = 0; q < n;q++){   
                        gd = 1;
                        pd = 1;     
                            for (int t = 0;t < n;t++){
                                if(t+q >= n){
                                    gd*=G[q+t-n][t];
                                }else{
                                    gd *= G[t+q][t];       
                                }
                            }                                   //Вычисление всех оставшихся определителей и решений, вывод их на экран
                        opr0+=gd;
                            for (int t = 0;t < n;t++){
                                if(q-t < 0){
                                    pd *= G[(q-t)+n][t]; 
                                }else{
                                    pd *= G[q-t][t];       
                                }
                             } 
                        opr0-=pd;
                    }
    } 
    if (opr0 == 0){
        printf("СЛАУ не имеет решений\n"); 
        return 0;
    }
    printf("Решения: ");
    for(int PEREM = 0; PEREM < n;PEREM++){
        for(int i = 0;i < n; i++){
            for(int j = 0;j < n; j++){
                opr = 0;
                XYZ[i][j] = G[i][j];
                XYZ[i][PEREM] = R[i][0];
                if(n == 2){
                    opr = XYZ[0][0]*XYZ[1][1]-XYZ[0][1]*XYZ[1][0]; // Вычисление всех оставшихся определителей для СЛАУ с 2 неизвестными
                }else{
                    for(int q = 0; q < n;q++){   
                        gd = 1;
                        pd = 1;     
                            for (int t = 0;t < n;t++){
                                if(t+q >= n){
                                    gd*=XYZ[q+t-n][t];
                                }else{
                                    gd *= XYZ[t+q][t];       
                                }
                            }                                   //Вычисление всех оставшихся определителей и решений, вывод их на экран
                        opr+=gd;
                            for (int t = 0;t < n;t++){
                                if(q-t < 0){
                                    pd *= XYZ[(q-t)+n][t]; 
                                }else{
                                    pd *= XYZ[q-t][t];       
                                }
                             } 
                        opr-=pd;
                    } 
                }
            }
        }
        float resh = (float)opr/opr0;
        printf("%d / %d = %.3f",opr , opr0, resh);
        if ( PEREM != n - 1 ){
            printf("; ");
        }else{
            printf(".\n");
        }
    }
}

