#include "point.h"
#include <math.h>
#include <stdio.h>

void Vvod_Koordinat_cirlce(Circle* c)
{
    printf("Введите координаты центра окружности: ");
    scanf("%d %d", &c->A.x, &c->A.y);
    printf("Введите радиус окружности: ");
    scanf("%d", &c->R);
}

void print_cirlce(Circle* c, FILE* f)
{
    fprintf(f, "Circle((%d;%d), %d)\n", c->A.x, c->A.y, c->R);
    if (c->R <= 0) {
        fprintf(f, "Error: invalid circle\n");
    }
    printf("Circle((%d;%d), %d)\n", c->A.x, c->A.y, c->R);
    if (c->R <= 0) {
        printf("Error: invalid circle\n");
    }
}

void print_P_S_circle(Circle* c, float P, float S, FILE* f)
{
    fprintf(f, "Perimeter of circle: %.2f\n", P);
    printf("Perimeter of circle: %.2f\n", P);
    fprintf(f, "Area of circle: %.2f\n", S);
    printf("Area of circle: %.2f\n", S);
}

float perimeter_circle(Circle* c)
{
    float P = 2 * 3.14 * c->R;
    return P;
}

float area_circle(Circle* c)
{
    float S = 3.14 * pow(c->R, 2);
    return S;
}
