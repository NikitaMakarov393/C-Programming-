#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define N


int main(){
    int K;
    int kol;
    int nomer = 1;
    int max = 0;
    unsigned char A[N] =  "Loremipsumdolorsitamet, consecteturadipiscingelit, seddoeiusmodtemporincididuntutlaboreetdoloremagnaaliqua. Ut enim ad minim veniam, quisnostrud exercitation ullamcolaboris nisi utaliquip ex eacommodoconsequat. Duis auteirure dolor in reprehenderit in voluptatevelitessecillum dolore eufugiatnullapariatur. Excepteursintoccaecatcupidatat non proident, sunt in culpa qui officiadeseruntmollitanim id estlaborum.";
    for(int i = 0; i < strlen(A); i++){
        K = 0;
        if (A[i] == ' '){
            nomer++;
            continue;       // подсчет колличетсва слов строки и пропуск шага цикла на элементе ' '
        }
            for(int j = i; A[j] != ' '; j++) {
                if (A[j] == 'a'){
                    K++;            // подсчет колличетсва букв а в каждом слове строки
                }
        }
        if (max < K){
            max = K;
            kol = nomer;        // определение максимального колличества а в слове строки, а также его порядковый номер
        }
    }
    printf("Максимальное колличество букв 'а' в слове: %d\nНомер слова: %d\n", max, kol);
    int f = 1;
    printf("Слово: ");
    for(int i = 0; i < strlen(A); i++){
        if (A[i] == ' '){
            f++;   // подсчет номера слова на котором находится цикл
        }
        if (f == kol){
                for(int j = i+1;A[j] != ' ';j++){
                    printf("%c", A[j]); // поэлементовый вывод слова с максимальным колличеством букв а
                    i++;
                }
            }
        }
    printf("\n");
}