// bahasa C untuk pemula
// program sederhana
#include <stdio.h>

int main() {
    printf("Bilangan genap bukan kelipatan 5 dari range 1 - 100:\n");

    for (int i = 2; i <= 100; i += 2) {
        if (i % 5 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
