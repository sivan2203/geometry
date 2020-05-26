#include "point.h"
#include <math.h>

void top_in_circle(Triangle* t, Circle* c, FILE* f)
{
    for (int i = 1; i <= 3; i++) {
        if ((pow(t->P[i].x - c->A.x, 2) + pow(t->P[i].y - c->A.y, 2)) <= pow(c->R, 2)) {
            printf("Вершина %d треугольника лежит внутри круга\n", i);
            fprintf(f, "Вершина %d треугольника лежит внутри круга\n", i);
        }
    }
}
