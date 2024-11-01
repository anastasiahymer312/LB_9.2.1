#include <stdio.h>
#include "var.h"

// Визначення макросів
#define SQR(x) ((x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define ABS(x) ((x) >= 0 ? (x) : -(x))

// Макрос для виведення результату
#define PRINT_RESULT(w) printf("w = %d\n", w);

int main() {
    puts(" values for variables x, y, z:");
    scanf_s("%d %d %d", &x, &y, &z);  

    printf("values: x = %d, y = %d, z = %d\n", x, y, z);

#if (z > 3)
    
    w = MAX(SQR(x + y), SQR(x - z));
#else
    w = MIN((x * y) + z, SQR(z * y + x));
#endif

    PRINT_RESULT(w);
    return 0;
}
