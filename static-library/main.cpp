#include <cstdio>

extern int __add(int, int);
extern int __sub(int, int);

extern float __add(float, float);
extern float __sub(float, float);

extern double __add(double, double);
extern double __sub(double, double);

int main() {
    printf("5 + 5 = %d\n", __add(5, 5));
    printf("5 - 5 = %d\n", __sub(5, 5));
    printf("10.5 + 5.0 = %.2f\n", __add(10.5f, 5.0f));
    printf("10.5 - 5.0 = %.2f\n", __sub(10.5f, 5.0f));
    printf("10.5 + 5.0 = %.2f\n", __add(10.5, 5.0));
    printf("10.5 - 5.0 = %.2f\n", __sub(10.5, 5.0));

    return 0;
}







