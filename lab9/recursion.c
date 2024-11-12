//Вариант 14
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265358979323846
#define b 1
//Вычисление бесконечной рекурсии до заданной n вида cos (x+b) = cos(b) - x * sin(b+ PI/2)- ...- (pow(x,n)*sin(b+PI))/n!; b - any; 0 < x < 1; E = pow(10;-4).
double recursion(double x, int n) {
    if (n == 0) {
        return cos(b);
    } else {
        // Вычисляем факториал n
        unsigned long long factorial_n = 1;
        for (int N = 1; N <= n; N++) {
            factorial_n *= N; 
        }
        if (factorial_n > 18 446 744 073 709 551 615 || factorial_n == 0){
            return NAN;
        }
        return recursion(x, n - 1) - (pow(x, n) * sin(b + PI * (n / 2.0))) / factorial_n;
    }
}

int main() {
    double x;
    int n;
    // Проверка, что 0 < x < 1
    do {
        printf("Введите 0 < x < 1: ");
        scanf("%lf", &x);
    } while (x <= 0 || x >= 1);
    //Проверка, что n натуральное число
    do{
    printf("Введите любое натуральное значение n для выполнения функции: ");
    scanf("%d", &n);
    }while(n <= 0 || n % 1 != 0);
    double result = recursion(x, n);
    if (isnan(result)) {
        printf("Ошибка при вычислении : результат недопустимый (переполнение факториала n) (NaN).\n");
    } else {
        printf("Значение выражения: %.4lf\n", result);
    }
}