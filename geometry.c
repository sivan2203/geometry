#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float Sidelength(int a, int b, int c, int d)
{
    float q = ((c - a) * (c - a) + (d - b) * (d - b));
    float l = sqrt(q);

    return l;
}

void proverka(int* x1, int* y1, int* x2, int* y2, int* x3, int* y3)
{
    while (*x1 == *x2 || *x1 == *x3 || *x2 == *x3) {
        printf("Введите новые координаты для x1, x2, x3\n");
        scanf("%d %d %d", &*x1, &*x2, &*x3);
    }

    while (*y1 == *y2 || *y1 == *y3 || *y2 == *y3) {
        printf("Введите новые координаты для y1, y2, y3\n");
        scanf("%d %d %d", &*y1, &*y2, &*y3);
    }
}

int main()
{
    int x1, y1, r;
    printf("     x y r \n");
    printf("Круг ");
    scanf("%d %d %d", &x1, &y1, &r);
    int xt1, xt2, yt1, yt2, xt3, yt3;

    //Проверка радиуса окружности

    int a = isalpha(x1);
    int b = isalpha(y1);
    int c = isalpha(r);

    if (a != 0 || b != 0 || c != 0) {
        exit(1);
    }

    while (r <= 0) {
        printf("Введите другое число больше 0:  ");
        scanf("%d", &r);
    }
    //Вычесление периметра круга
    float Perk = 2 * M_PI * r;
    printf("Периметр окружности равен: %f \n", Perk);
    //Вычесление площади круга
    float Plosk = M_PI * r * r;
    printf("Площадь круга равна: %f\n", Plosk);

    printf("            x1 y1 x2 y2 x3 y3 \n");
    printf("Треугольник ");
    scanf("%d %d %d %d %d %d", &xt1, &yt1, &xt2, &yt2, &xt3, &yt3);

    int q = isalpha(xt1);
    int w = isalpha(yt1);
    int e = isalpha(xt2);
    int s = isalpha(yt2);
    int t = isalpha(xt3);
    int y = isalpha(yt3);

    if (q != 0 || w != 0 || e != 0 || s != 0 || t != 0 || y != 0) {
        exit(1);
    }

    proverka(&xt1, &yt1, &xt2, &yt2, &xt3, &yt3);
    //вычисление 3х сторон треугольника
    float ab = Sidelength(xt1, yt1, xt2, yt2);
    float ac = Sidelength(xt1, yt1, xt3, yt3);
    float bc = Sidelength(xt2, yt2, xt3, yt3);
    //Вычисление периметра треугольника
    float Per_t = ab + ac + bc;
    printf("Периметр треугольника равен: %f\n", Per_t);
    //вычесление площали треугольника
    float polyper = Per_t / 2;
    float Plos_t = polyper * sqrt(sqrt(polyper - ab)) + (sqrt(polyper - ac)) + (sqrt(polyper - bc));
    printf("Площадь треугольника равна: %f\n", Plos_t);

    return 0;
}
